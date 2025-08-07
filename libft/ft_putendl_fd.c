/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:09:52 by moabe             #+#    #+#             */
/*   Updated: 2025/05/08 16:34:25 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}

// #include <fcntl.h>
// #include <stdio.h>

// int main(void)
// {
//     // テスト1：標準出力への改行付き出力
//     ft_putendl_fd("Hello, world", 1);  // → 画面に "Hello, world\n" が表示される

//     // テスト2：標準エラー出力への改行付き出力
//     ft_putendl_fd("Error occurred", 2);  // → stderr に出力される

//     // テスト3：ファイルへの改行付き出力
//     int fd = open("putendl_test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd < 0)
//     {
//         perror("open");
//         return 1;
//     }
//     ft_putendl_fd("This line is in a file", fd);
//     close(fd);

//     // テスト4：空文字列の出力
//     ft_putendl_fd("", 1);  // → 改行のみが表示される

//     // テスト5：NULL入力（安全性チェック）
//     ft_putendl_fd(NULL, 1);  // → NULLチェックが無ければクラッシュする可能性

//     return 0;
// }
