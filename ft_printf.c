/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe < moabe@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 20:01:38 by moabe             #+#    #+#             */
/*   Updated: 2025/05/23 14:56:48 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format_string, ...)
{
	const char	*p;
	int			count;
	va_list		
	
	va_start()
	count = 0;
	p = ft_strdup(format_string);
	if (!p)
		return (0);
	while (!p){
		while (p != '%')
			write(1, p++, 1);
		if (*p++ == '%')
			judge_type(*p++, argument_list);
	}
}

void	judge_type(char p, argument_list)
{
	if (p == 'c')
		ft_case_c(va_arg(argument_list, int));
	else if (p == 's')
		ft_case_s(va_arg(argument_list, char*));
	else if (p == 'p')
		ft_case_p(va_arg(argument_list, void*));
	else if (p == 'd' || p == 'i')
		ft_case_di(va_arg(argument_list, int));
	else if (p == 'u')
		ft_case_u(va_arg(argument_list, unsigned int));
	else if (p == 'x')
		ft_case_x(va_arg(argument_list, unsigned int));
	else if (p == 'X')
		ft_case_X(va_arg(argument_list, unsigned int));
	else if (p == '%')
		ft_case_c('%');
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("ももも%");
// 	return (0);
// }