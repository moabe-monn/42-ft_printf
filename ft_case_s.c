/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe < moabe@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 09:03:06 by moabe             #+#    #+#             */
/*   Updated: 2025/05/23 13:05:20 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_case_s(char *p)
{
	int		count;

	if (p == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	count = ft_strlen(p);
	write(1, p, count);
	return (count);
}
