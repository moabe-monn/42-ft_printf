/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:09:59 by moabe             #+#    #+#             */
/*   Updated: 2025/05/08 16:34:38 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = n;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number *= -1;
	}
	if (number >= 10)
	{
		ft_putnbr_fd(number / 10, fd);
	}
	ft_putchar_fd("0123456789"[number % 10], fd);
}

// #include <fcntl.h>
// #include <stdio.h>

// int main(void)
// {
//     // テスト1：標準出力に正の整数
//     ft_putnbr_fd(12345, 1);  // → "12345" が表示される
//     write(1, "\n", 1);

//     // テスト2：標準出力に負の整数
//     ft_putnbr_fd(-6789, 1);  // → "-6789" が表示される
//     write(1, "\n", 1);

//     // テスト3：0の出力
//     ft_putnbr_fd(0, 1);      // → "0" が表示される
//     write(1, "\n", 1);

//     // テスト4：int最小値（-2147483648）出力
//     ft_putnbr_fd(-2147483648, 1);
//     write(1, "\n", 1);

//     // テスト5：ファイル出力
//     int fd = open("putnbr_test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd < 0)
//     {
//         perror("open");
//         return 1;
//     }
//     ft_putnbr_fd(2025, fd);  // → ファイルに "2025" が書き込まれる
//     close(fd);

//     return 0;
// }
