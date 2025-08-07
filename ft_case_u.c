/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:27:45 by moabe             #+#    #+#             */
/*   Updated: 2025/08/07 16:41:20 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_case_u(unsigned int p)
{
	char		*ui;
	size_t		count;

	ui = ft_uitoa(p);
	if (ui == NULL)
		return ((int)write(1, "(null)", 6));
	count = ft_strlen(ui);
	write(1, ui, count);
	free(ui);
	return ((int)count);
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
