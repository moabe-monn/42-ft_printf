/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:16:00 by moabe             #+#    #+#             */
/*   Updated: 2025/04/29 18:33:16 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	int					i;

	if (!dest || !src)
		return (NULL);
	if ((unsigned char *)dest > (unsigned char *)src)
	{
		i = (int)count - 1;
		while (i >= 0)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)count)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	return (dest);
}

// #define BUFSIZE 10

// int	main(void)
// {
// 	char	src1[] = {"0123456789"};
// 	char	src2[] = {"0123456789"};
// 	char	src1_[] = {"0123456789"};
// 	char	src2_[] = {"0123456789"};
// 	char	*dest;

// 	dest = "dest";
// 	memmove(&src1[5], &src1[0], 5);
// 	printf("%s\n", src1);
// 	memmove(src2, dest, strlen(dest));
// 	printf("%s\n", src2);

// 	ft_memmove(&src1_[5], &src1_[0], 5);
// 	printf("%s\n", src1_);
// 	ft_memmove(src2_, dest, strlen(dest));
// 	printf("%s\n", src2_);
// 	return (0);
// }
