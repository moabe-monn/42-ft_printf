/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_di.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:20:14 by moabe             #+#    #+#             */
/*   Updated: 2025/08/07 16:14:30 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_case_di(int p)
{
	char	*decimal;
	size_t	len;

	decimal = ft_itoa(p);
	if (decimal == NULL)
		return ((int)write(1, "(null)", 6));
	len = ft_strlen(decimal);
	write(1, decimal, len);
	free(decimal);
	return ((int)len);
}
