/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_di.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe < moabe@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:20:14 by moabe             #+#    #+#             */
/*   Updated: 2025/05/23 11:48:30 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_case_di(int p)
{
	char	*decimal;
	
	decimal = ft_itoa(p);
	write(1, decimal, ft_strlen(decimal));
	return (count);
}