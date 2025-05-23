/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_xX.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe < moabe@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:49:48 by moabe             #+#    #+#             */
/*   Updated: 2025/05/23 14:03:45 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_case_x(unsigned int p) //負の時は補数を返す
{
	char	*hex;
	int		count;

	hex = ft_itoax(p);
	count = ft_strlen(hex);
	write(1, hex, count);
	return (count);
}

int	ft_case_X(unsigned int p) //負の時は補数を返す
{
	char	*heX;
	int		count;

	heX = ft_itoaX(p);
	count = ft_strlen(heX);
	write(1, heX, count);
	return (count);
}


char	*ft_itoax(unsigned int n)
{
	char			buf[33];
	char			*tmp;

	tmp = &buf[sizeof(buf)];
	*--tmp = '\0';
	while (1)
	{
		*--tmp = "0123456789abcdef"[n % 16];
		n /= 16;
		if (!n)
			break ;
	}
	return (ft_strdup(tmp));
}

char	*ft_itoaX(unsigned int n)
{
	char			buf[33];
	char			*tmp;

	tmp = &buf[sizeof(buf)];
	*--tmp = '\0';
	while (1)
	{
		*--tmp = "0123456789ABCDEF"[n % 16];
		n /= 16;
		if (!n)
			break ;
	}
	return (ft_strdup(tmp));
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%x", 2147483650);
// 	return (0);
// }