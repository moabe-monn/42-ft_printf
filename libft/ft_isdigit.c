/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:04:21 by moabe             #+#    #+#             */
/*   Updated: 2025/05/01 13:52:56 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (48 <= c && c <= 57);
}

// #include <ctype.h>
// #include <stdio.h>

// int main(void) {
// 	printf("%d\n", ft_isdigit('8'));
// 	printf("%d\n", isdigit('8'));
// 	printf("%d\n", isdigit('0'));
// 	printf("%d\n", ft_isdigit('0'));
// 	printf("%d\n", isdigit('p'));
// 	printf("%d\n", ft_isdigit('p'));

// }
