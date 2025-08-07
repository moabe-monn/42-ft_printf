/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:49:55 by moabe             #+#    #+#             */
/*   Updated: 2025/04/29 16:49:55 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	const char	*p;
	size_t		i;

	p = (const char *)buf;
	i = 0;
	while (i < n)
	{
		if (*(p + i) == (char)ch)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char buf[] = "ABCD5EFGH";
// 	char *ch;
//     char *ch2;

// 	ch = (char*)memchr(buf,'D',sizeof(buf));
// 	if(ch!=NULL){
// 		printf("検索文字から表示→%s\n",ch);
// 	}else{
// 		puts("検索文字が見つかりませんでした。");
// 	}
//     ch2 = (char*)ft_memchr(buf,'D',sizeof(buf));
// 	if(ch2!=NULL){
// 		printf("検索文字から表示→%s\n",ch);
// 	}else{
// 		puts("検索文字が見つかりませんでした。");
// 	}
// 	return (0);
// }
