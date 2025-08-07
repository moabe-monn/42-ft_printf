/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 07:31:30 by moabe             #+#    #+#             */
/*   Updated: 2025/05/08 19:33:46 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	size_t	len;
	char	*copy;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// int main()
// {
//     char original[] = "Hello, World!";
//     char *copy = ft_strdup(original);

//     if (copy == NULL) {
//         printf("strdup failed\n");
//         return (1); //異常終了
//     }

//     printf("Original: %s\n", original);
//     printf("Copy: %s\n", copy);

//     // 動的に確保したメモリを解放
//     free(copy);

//     return (0);
// }
