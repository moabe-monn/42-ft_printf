/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:41:09 by moabe             #+#    #+#             */
/*   Updated: 2025/05/01 13:52:33 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *buf, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = buf;
	i = 0;
	while (i < n)
	{
		*(p + i) = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char	buf[] = "ABCDEFGHIJK";
// 	char	buf2[] = "ABCDEFGHIJK";

// 	//先頭から2バイト進めた位置に「１」を3バイト書き込む
// 	bzero(buf+2, 3);
// 	printf("buf文字列→%s\n", buf);
// 	//先頭から2バイト進めた位置に「１」を3バイト書き込む
// 	ft_bzero(buf2+2, 3);
// 	printf("ft_bzero:buf文字列→%s\n", buf2);
// 	return (0);
// }
