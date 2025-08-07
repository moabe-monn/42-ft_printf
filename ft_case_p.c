/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 09:36:33 by moabe             #+#    #+#             */
/*   Updated: 2025/08/07 14:27:55 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_case_p(unsigned long p)
{
	uintptr_t	num;
	char		*address;
	int			count;

	if (!p)
		return (write(1, "(nil)", 5));
	num = (uintptr_t)p;
	address = ft_itoauin(num);
	count = ft_strlen(address);
	write(1, "0x", 2);
	write(1, address, count);
	return (count + 2);
}

char	*ft_itoauin(uintptr_t n)
{
	char			buf[100];
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
