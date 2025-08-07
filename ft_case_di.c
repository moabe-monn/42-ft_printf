/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_di.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:20:14 by moabe             #+#    #+#             */
/*   Updated: 2025/08/07 14:27:38 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_case_di(int p)
{
	char	*decimal;

	decimal = ft_itoa(p);
	return (write(1, decimal, ft_strlen(decimal)));
}
