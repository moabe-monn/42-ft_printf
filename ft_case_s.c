/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 09:03:06 by moabe             #+#    #+#             */
/*   Updated: 2025/08/07 16:39:55 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_case_s(char *p)
{
	size_t		count;

	if (p == NULL)
		return ((int)write(1, "(null)", 6));
	count = ft_strlen(p);
	write(1, p, count);
	return ((int)count);
}
