/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:11:19 by moabe             #+#    #+#             */
/*   Updated: 2025/05/01 13:52:43 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <ctype.h>
// #include <stdio.h>

// int main(void) {
// 	printf("%d\n", ft_isalnum('!'));
// 	printf("%d\n", isalnum('!'));
// 	printf("%d\n", ft_isalnum('0'));
// 	printf("%d\n", isalnum('0'));
// 	printf("%d\n", ft_isalnum('p'));
// 	printf("%d\n", isalnum('p'));
// }
