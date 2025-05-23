/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe < moabe@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 20:02:44 by moabe             #+#    #+#             */
/*   Updated: 2025/05/23 14:42:05 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include "libft.h"

int		ft_case_c(int c);
int		ft_case_di(int p);
int		ft_case_p(void *p);
char	*ft_itoauin(uintptr_t n);
int		ft_case_s(char *p);
int		ft_case_u(unsigned int p);
char	*ft_uitoa(unsigned int n);
int		ft_case_x(unsigned int p);
int		ft_case_X(unsigned int p);
char	*ft_itoax(unsigned int n);
char	*ft_itoaX(unsigned int n);
char	*ft_itoa(int n);
int		ft_printf(const char *format_string, argument_list);
void	judge_type(char p, argument_list);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *s);

#endif