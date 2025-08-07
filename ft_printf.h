/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 20:02:44 by moabe             #+#    #+#             */
/*   Updated: 2025/08/07 17:41:57 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stddef.h>
# include "libft.h"

int		ft_case_c(int c);
int		ft_case_di(int p);
int		ft_case_p(unsigned long p);
int		ft_case_s(char *p);
int		ft_case_u(unsigned int p);
int		ft_case_x(unsigned int p);
int		ft_case_upperx(unsigned int p);
int		ft_printf(const char *format_string, ...);

#endif
