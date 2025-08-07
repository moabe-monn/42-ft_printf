/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:09:45 by moabe             #+#    #+#             */
/*   Updated: 2025/05/08 15:12:23 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h>
// #include <stdio.h>

// // 自作関数のプロトタイプ
// void ft_putchar_fd(char c, int fd);

// int main(void)
// {
//     // テスト1：標準出力に出力
//     ft_putchar_fd('A', 1);  // 画面に "A" が表示される

//     // テスト2：標準エラー出力に出力
//     ft_putchar_fd('E', 2);  // エラー出力に "E" が表示される（リダイレクトで確認可）

//     // テスト3：ファイルに書き込む
//     int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd < 0)
//     {
//         perror("open");
//         return 1;
//     }

//     ft_putchar_fd('F', fd);  // ファイルに 'F' が書き込まれる

//     close(fd);

//     return 0;
// }
