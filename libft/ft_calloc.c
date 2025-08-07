/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:31:58 by moabe             #+#    #+#             */
/*   Updated: 2025/04/29 16:31:58 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	mul;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	mul = nmemb * size;
	p = malloc(mul);
	if (!p)
		return (NULL);
	ft_bzero(p, mul);
	return (p);
}

// int is_zero_initialized(void* ptr, size_t total_size) {
//     unsigned char* p = (unsigned char*)ptr;
//     for (size_t i = 0; i < total_size; i++) {
//         if (p[i] != 0) return 0;
//     }
//     return 1;
// }

// int main() {
//     size_t nmemb = 10;
//     size_t size = sizeof(int);
//     size_t total = nmemb * size;

//     // 正常系テスト
//     void* ptr = ft_calloc(nmemb, size);
//     if (!ptr) {
//         printf("Test 1 Failed: NULL returned on valid allocation\n");
//         return 1;
//     }
//     if (!is_zero_initialized(ptr, total)) {
//         printf("Test 2 Failed: Memory not zero-initialized\n");
//         free(ptr);
//         return 1;
//     }
//     printf("Test 1 and 2 Passed: Valid allocation and zero-initialized\n");
//     free(ptr);

//     // オーバーフローチェックテスト
//     nmemb = 4290000000000;
//     size = 2;
//     ptr = ft_calloc(nmemb, size);
//     if (ptr != NULL) {
//         printf("Test 3 Failed: Overflow not handled correctly\n");
//         free(ptr);
//         return 1;
//     }
//     printf("Test 3 Passed: Overflow correctly returned NULL\n");

//     return 0;
// }
