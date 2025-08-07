/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:10:05 by moabe             #+#    #+#             */
/*   Updated: 2025/05/08 16:34:54 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}

// #include <fcntl.h>
// #include <stdio.h>

// int main(void)
// {
//     // テスト1：標準出力に出力
//     ft_putstr_fd("Hello, stdout!\n", 1);  // → コンソールに出力される

//     // テスト2：標準エラーに出力
//     ft_putstr_fd("This is an error!\n", 2);  // → stderrに出力される（2>でリダイレクト可）

//     // テスト3：ファイル出力
//     int fd = open("putstr_test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd < 0)
//     {
//         perror("open");
//         return 1;
//     }
//     ft_putstr_fd("This goes into a file.\n", fd);  // → ファイルに出力される
//     close(fd);

//     // テスト4：NULL引数の安全性（実装による）
//     ft_putstr_fd(NULL, 1);  // → NULLチェックしていないとクラッシュする可能性あり

//     return 0;
// }
