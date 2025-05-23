/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe < moabe@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 09:36:33 by moabe             #+#    #+#             */
/*   Updated: 2025/05/23 14:16:57 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_case_p(void *p)
{
	uintptr_t	num;
	char		*address;
	int			count;
	
	num = (uintptr_t)p;
	address = ft_itoauin(num);
	count = ft_strlen(address);
	write(1, "0x", 2);
	write(1, address, count);
	return (count+3);
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