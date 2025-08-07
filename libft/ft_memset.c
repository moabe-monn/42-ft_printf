/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:20:24 by moabe             #+#    #+#             */
/*   Updated: 2025/05/01 13:53:24 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)buf;
	i = 0;
	while (i < n)
	{
		*(p + i) = ch;
		i++;
	}
	return (p);
}

// int	main(void)
// {
// 	char	buf[] = "ABCDEFGHIJK";
// 	char	buf2[] = "ABCDEFGHIJK";

// 	//先頭から2バイト進めた位置に「１」を3バイト書き込む
// 	memset(buf + 2, '1', 3);
// 	printf("buf文字列→%s\n", buf);
// 	//先頭から2バイト進めた位置に「１」を3バイト書き込む
// 	ft_memset(buf2 + 2, '1', 3);
// 	printf("ft_memset:buf文字列→%s\n", buf2);
// 	return (0);
// }
