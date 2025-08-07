/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:30:31 by moabe             #+#    #+#             */
/*   Updated: 2025/05/08 16:35:32 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	int			total_len;
	size_t		i;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)ft_calloc(sizeof(*str), total_len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	return (str);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// void test_ft_strjoin(const char *s1, const char *s2, const char *expected)
// {
//     char *result = ft_strjoin(s1, s2);
//     if (result == NULL && expected == NULL)
//         printf("✅ Passed: NULL inputs handled\n");
//     else if (result && expected && strcmp(result, expected) == 0)
//         printf("✅ Passed: \"%s\" + \"%s\" => \"%s\"\n", s1, s2, result);
//     else
//         printf("❌ Failed: \"%s\" + \"%s\" => \"%s\" (Expected: \"%s\")\n",
//            s1, s2, result ? result : "NULL", expected ? expected : "NULL");
//     free(result);
// }

// int main(void)
// {
//     test_ft_strjoin("Hello", "World", "HelloWorld");
//     test_ft_strjoin("", "Test", "Test");
//     test_ft_strjoin("Test", "", "Test");
//     test_ft_strjoin("", "", "");
//     test_ft_strjoin(NULL, "Test", NULL);
//     test_ft_strjoin("Test", NULL, NULL);
//     test_ft_strjoin(NULL, NULL, NULL);
//     return 0;
// }
