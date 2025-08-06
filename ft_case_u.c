/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe < moabe@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:27:45 by moabe             #+#    #+#             */
/*   Updated: 2025/08/06 18:59:57 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_case_u(unsigned int p)
{
	char	*ui;
	int		count;

	ui = ft_uitoa(p);
	count = ft_strlen(ui);
	write(1, ui, count);
	return(count);
}

char	*ft_uitoa(unsigned int n)
{
	char			buf[33];
	char			*tmp;

	tmp = &buf[sizeof(buf)];
	*--tmp = '\0';
	while (1)
	{
		*--tmp = "0123456789"[n % 10];
		n /= 10;
		if (!n)
			break ;
	}
	return (ft_strdup(tmp));
}