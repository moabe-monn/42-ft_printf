/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:50:25 by moabe             #+#    #+#             */
/*   Updated: 2025/04/29 16:50:25 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	target;

	target = (unsigned char)c;
	while (*s)
	{
		if (*s == target)
			return ((char *)s);
		s++;
	}
	if (*s == target)
		return ((char *)s);
	return (NULL);
}

// int main(void)
// {
// 	char test[20] = "abcdefghijk";
// 	char *p;
//     char *q;
//     char *r;
//     char *s;

// 	p = strchr(test,'g');
// 	printf("検索文字が見つかった場所から表示→%s\n",p);
//     q = ft_strchr(test,'g');
//     printf("検索文字が見つかった場所から表示→%s\n",q);
//     r = strchr(test,'t');
// 	printf("検索文字が見つかった場所から表示→%s\n",r);
//     s = ft_strchr(test,'t');
//     printf("検索文字が見つかった場所から表示→%s\n",s);
// 	return (0);
// }
