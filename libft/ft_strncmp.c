/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:03:27 by moabe             #+#    #+#             */
/*   Updated: 2025/05/01 13:53:59 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main(void)
// {
//     char str[] = "ABC";
//     char str1[] = "ABC";
//     char str2[] = "ABCD";
//     char str3[] = "B";
//     char str4[] = "AAAA";
//     char str5[] = "ABE";
// 	unsigned int size = 4;

//     printf("strncmp(%s, %s) = %d\n", str, str1, ft_strncmp(str, str1, size));
//     printf("strncmp(%s, %s) = %d\n", str, str2, ft_strncmp(str, str2, size));
//     printf("strncmp(%s, %s) = %d\n", str, str3, ft_strncmp(str, str3, size));
//     printf("strncmp(%s, %s) = %d\n", str, str4, ft_strncmp(str, str4, size));
//     printf("strncmp(%s, %s) = %d\n", str, str5, ft_strncmp(str, str5, size));

//     return (0);
// }
