/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:49:32 by moabe             #+#    #+#             */
/*   Updated: 2025/04/29 16:49:32 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

// #include <stdio.h>

// int main(void)
// {
//     char *result;

//     // テスト1: 前後にトリム対象文字がある
//     result = ft_strtrim("   Hello, World!   ", " ");
//     if (result)
//     {
//         printf("Test 1: '%s'\n", result);
//         free(result);
//     }

//     // テスト2: 前後に複数の異なるトリム対象文字がある
//     result = ft_strtrim("xyzHello, World!zyx", "xyz");
//     if (result)
//     {
//         printf("Test 2: '%s'\n", result);
//         free(result);
//     }

//     // テスト3: トリム対象が含まれていない
//     result = ft_strtrim("Hello", " ");
//     if (result)
//     {
//         printf("Test 3: '%s'\n", result);
//         free(result);
//     }

//     // テスト4: すべてトリム対象で構成されている
//     result = ft_strtrim("xxx", "x");
//     if (result)
//     {
//         printf("Test 4: '%s'\n", result);  // 期待される出力は ""
//         free(result);
//     }

//     // テスト5: 空文字列を渡す
//     result = ft_strtrim("", " ");
//     if (result)
//     {
//         printf("Test 5: '%s'\n", result);  // 出力は ""
//         free(result);
//     }

//     // テスト6: トリム対象が空文字列
//     result = ft_strtrim("No trimming", "");
//     if (result)
//     {
//         printf("Test 6: '%s'\n", result);  // 出力はそのまま
//         free(result);
//     }

//     return 0;
// }
