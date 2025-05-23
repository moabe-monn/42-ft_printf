/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:22:32 by moabe             #+#    #+#             */
/*   Updated: 2025/05/08 16:33:25 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			buf[33];
	char			*tmp;
	unsigned int	un;

	if (n < 0)
		un = -n;
	else
		un = n;
	tmp = &buf[sizeof(buf)];
	*--tmp = '\0';
	while (1)
	{
		*--tmp = "0123456789"[un % 10];
		un /= 10;
		if (!un)
			break ;
	}
	if (n < 0)
		*--tmp = '-';
	return (ft_strdup(tmp));
}

// int	main(void)
// {
// 	char	*result;

// 	// テスト1: 0
// 	result = ft_itoa(0);
// 	if (result)
// 	{
// 		printf("Test 1 (0): %s\n", result);
// 		free(result);
// 	}
// 	// テスト2: 正の数
// 	result = ft_itoa(12345);
// 	if (result)
// 	{
// 		printf("Test 2 (12345): %s\n", result);
// 		free(result);
// 	}
// 	// テスト3: 負の数
// 	result = ft_itoa(-9876);
// 	if (result)
// 	{
// 		printf("Test 3 (-9876): %s\n", result);
// 		free(result);
// 	}
// 	// テスト4: INT_MIN（-2147483648）
// 	result = ft_itoa(-2147483648);
// 	if (result)
// 	{
// 		printf("Test 4 (INT_MIN): %s\n", result);
// 		free(result);
// 	}
// 	// テスト5: INT_MAX（2147483647）
// 	result = ft_itoa(2147483647);
// 	if (result)
// 	{
// 		printf("Test 5 (INT_MAX): %s\n", result);
// 		free(result);
// 	}
// 	// テスト6: 負の1桁（-7）
// 	result = ft_itoa(-7);
// 	if (result)
// 	{
// 		printf("Test 6 (-7): %s\n", result);
// 		free(result);
// 	}
// 	return (0);
// }
