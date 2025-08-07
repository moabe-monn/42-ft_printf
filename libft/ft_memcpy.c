/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:53:07 by moabe             #+#    #+#             */
/*   Updated: 2025/05/01 13:53:19 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d_cpy;
	const unsigned char	*s_cpy;

	d_cpy = (unsigned char *)dest;
	s_cpy = (const unsigned char *)src;
	while (n--)
	{
		*d_cpy++ = *s_cpy++;
	}
	return (dest);
}

// #define BUF_SIZE 16

// int main()
// {
//     // 変数定義
//     char buf1[BUF_SIZE];
//     char buf2[BUF_SIZE];

//     // 変数初期化
//     memset(buf1, '\0', BUF_SIZE);
//     memset(buf2, '\0', BUF_SIZE);

//     // メモリ領域を特定の文字で埋める
//     memset(buf1, 'b', 6);  // buf1の最初の4バイトをaにする
//     memset(buf1, 'a', 2);  // buf1の最初の2バイトをbにする

//     // 配列の内容を表示
//     printf("元の関数：配列の要素を表示(コピー前)。\n");
//     printf("buf1:%s\n", buf1);
//     printf("buf2:%s\n", buf2);

//     // メモリをコピーする
//     memcpy(buf2, buf1, 3);  // buf1の先頭3バイトをbuf2にコピーする

//     // 配列の内容を表示
//     printf("元の関数：配列の要素を表示(コピー後)。\n");
//     printf("buf1:%s\n", buf1);
//     printf("buf2:%s\n", buf2);

// 	char buf1_[BUF_SIZE];
//     char buf2_[BUF_SIZE];

//     // 変数初期化
//     memset(buf1_, '\0', BUF_SIZE);
//     memset(buf2_, '\0', BUF_SIZE);

//     // メモリ領域を特定の文字で埋める
//     memset(buf1_, 'b', 6);  // buf1の最初の4バイトをaにする
//     memset(buf1_, 'a', 2);  // buf1の最初の2バイトをbにする

//     // 配列の内容を表示
//     printf("自作関数：配列の要素を表示(コピー前)。\n");
//     printf("buf1:%s\n", buf1_);
//     printf("buf2:%s\n", buf2_);

//     // メモリをコピーする
//     ft_memcpy(buf2_, buf1_, 3);  // buf1の先頭3バイトをbuf2にコピーする

//     // 配列の内容を表示
//     printf("自作関数：配列の要素を表示(コピー後)。\n");
//     printf("buf1:%s\n", buf1_);
//     printf("buf2:%s\n", buf2_);

//     return (0);
// }
