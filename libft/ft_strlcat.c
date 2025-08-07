/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:00:18 by moabe             #+#    #+#             */
/*   Updated: 2025/05/01 13:53:48 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] != '\0' && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// int	main(void)
// {
// 	char dest[20] = "Hello, ";
//  char src[20] = "world!";
//  unsigned int size;
// 	unsigned int result;

// 	size = 20; /*本来のdestが確保したメモリの数をいれた例*/
//  result = ft_strlcat(dest, src, size);
// 	printf("%u\n",result); /*destとsrcの長さの和*/
// 	printf("%s\n",dest); /*destの中身*/

// 	char dest2[14] = "I have a pen."; /*長さ　13　（終端文字によりメモリは14個）*/
//  char src2[20] = "I have an apple"; /*長さ 15　（終端文字によりメモリは16個）*/

// 	size = 10; /*destが確保したメモリの数よりも小さい例*/
//  result = ft_strlcat(dest2, src2, size);
// 	printf("%u\n",result); /*本来用意するべきだった長さ、つまり理想的なsizeの大きさの最小値*/
// 	printf("%s\n",dest2); /*destの中身*/

// 	char dest3[20] = "I have a pen."; /*長さ　13　（終端文字によりメモリは14個）*/
//     char src3[20] = "I have an apple"; /*長さ 15　（終端文字によりメモリは16個）*/

// 	size = 20; /*本来のdestが確保したメモリの数をいれた例*/
//     result = ft_strlcat(dest3, src3, size);
// 	printf("%u\n",result); /*本来用意するべきだった長さ、つまり理想的なsizeの大きさの最小値*/
// 	printf("%s\n",dest3); /*destの中身*/
// }
