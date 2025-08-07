/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 07:26:07 by moabe             #+#    #+#             */
/*   Updated: 2025/05/08 17:11:24 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static	int	long_edge(long num, int next_digit)
{
	if ((LONG_MAX / 10 < num) || (LONG_MAX / 10 == num && 7 < next_digit))
		return (-1);
	else if ((LONG_MIN / 10 > num)
		|| (LONG_MIN / 10 == num && 8 < next_digit))
		return (0);
	else
		return (1);
}

int	ft_atoi(const char *nptr)
{
	long		num;
	int			sign;

	num = 0;
	sign = 1;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\t'
		|| *nptr == '\v' || *nptr == '\f' || *nptr == '\r')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		sign = 1 - ((*nptr++ == '-') << 1);
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (long_edge(num, *nptr - '0') != 1)
			return (long_edge(num * sign, *nptr - '0'));
		num = num * 10 + (*nptr++ - '0');
	}
	return (num * sign);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	test;
// 	int	test2;
// 	int	test3;
// 	int	test4;
// 	int	test5;

// 	test = ft_atoi("");
// 	printf("%d\n", test);
// 	test2 = ft_atoi("      090910");
// 	printf("%d\n", test2);
// 	test3 = ft_atoi("--10");
// 	printf("%d\n", test3);
// 	test4 = ft_atoi("    -1234ab567");
// 	printf("%d\n", test4);
// 	test5 = ft_atoi("ff");
// 	printf("%d\n", test5);
// 	printf("%d\n", atoi("-92233720368547760909"));
// 	printf("%d\n", ft_atoi("-9223372036854776000"));
// }
