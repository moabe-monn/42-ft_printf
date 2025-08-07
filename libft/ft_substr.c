/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:51:54 by moabe             #+#    #+#             */
/*   Updated: 2025/04/29 16:51:54 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*p;
	size_t		i;
	size_t		strlength;

	if (start >= ft_strlen(s))
	{
		p = ft_calloc(1, sizeof(char));
		if (!p)
			return (NULL);
		return (p);
	}
	strlength = ft_strlen(s + start);
	i = 0;
	if (len < strlength)
		strlength = len;
	p = ft_calloc(sizeof(char), strlength + 1);
	if (!p)
		return (NULL);
	while (strlength > i)
	{
		*(p + i) = *(s + start + i);
		i++;
	}
	return (p);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char *result;

//     // テスト1: 通常の部分文字列
//     result = ft_substr("Hello, World!", 7, 5); // "World"
//     if (result)
//     {
//         printf("Test 1: '%s'\n", result);
//         free(result);
//     }

//     // テスト2: start が文字列長を超えている（→空文字列）
//     result = ft_substr("Hello", 10, 3);
//     if (result)
//     {
//         printf("Test 2: '%s'\n", result); // ""
//         free(result);
//     }

//     // テスト3: len が大きすぎる場合（→末尾まで取得）
//     result = ft_substr("Hello", 2, 100); // "llo"
//     if (result)
//     {
//         printf("Test 3: '%s'\n", result);
//         free(result);
//     }

//     // テスト4: len が 0 の場合（→空文字列）
//     result = ft_substr("Hello", 2, 0);
//     if (result)
//     {
//         printf("Test 4: '%s'\n", result); // ""
//         free(result);
//     }

//     // テスト5: 文字列全体を取り出す
//     result = ft_substr("TestString", 0, strlen("TestString"));
//     if (result)
//     {
//         printf("Test 5: '%s'\n", result); // "TestString"
//         free(result);
//     }

//     // テスト6: 空文字列から substr（→空文字列）
//     result = ft_substr("", 0, 5);
//     if (result)
//     {
//         printf("Test 6: '%s'\n", result); // ""
//         free(result);
//     }

//     // テスト7: start + len が範囲外（部分的に切り出される）
//     result = ft_substr("ABCDE", 3, 10); // "DE"
//     if (result)
//     {
//         printf("Test 7: '%s'\n", result);
//         free(result);
//     }

//     return 0;
// }
