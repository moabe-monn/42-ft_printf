/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe < moabe@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 20:01:38 by moabe             #+#    #+#             */
/*   Updated: 2025/08/06 17:14:23 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format_string, ...)
{
	int			count;
	va_list		argument_list;
	
	va_start(argument_list, format_string);
	count = 0;
	while (*format_string)
	{
		while (*format_string != '%' && format_string != NULL)
		{
			write(1, format_string++, 1);
			count++;
		}
		if (*format_string == '%')
		{
			count += judge_type(*++format_string, argument_list);
			format_string++;	
		}
	}
	va_end(argument_list);
	return (count);
}

int	judge_type(char p, va_list argument_list)
{
	if (p == 'c')
		return (ft_case_c(va_arg(argument_list, int)));
	else if (p == 's')
		return (ft_case_s(va_arg(argument_list, char*)));
	else if (p == 'p')
		return (ft_case_p(va_arg(argument_list, void*)));
	else if (p == 'd' || p == 'i')
		return (ft_case_di(va_arg(argument_list, int)));
	else if (p == 'u')
		return (ft_case_u(va_arg(argument_list, unsigned int)));
	else if (p == 'x')
		return (ft_case_x(va_arg(argument_list, unsigned int)));
	else if (p == 'X')
		return (ft_case_X(va_arg(argument_list, unsigned int)));
	else if (p == '%')
		return (ft_case_c('%'));
	else
		return(write(1, &p, 1));
}

#include <stdio.h>

int main(void)
{
	ft_printf("%c", '0');
	return (0);
}