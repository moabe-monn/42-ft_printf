/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_xX.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:49:48 by moabe             #+#    #+#             */
/*   Updated: 2025/08/07 14:32:01 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_case_x(unsigned int p)
{
	char	*hex;
	int		count;

	hex = ft_itoax(p);
	count = ft_strlen(hex);
	write(1, hex, count);
	return (count);
}

int	ft_case_upperx(unsigned int p)
{
	char	*hex;
	int		count;

	hex = ft_itoa_upperx(p);
	count = ft_strlen(hex);
	write(1, hex, count);
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

char	*ft_itoa_upperx(unsigned int n)
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
