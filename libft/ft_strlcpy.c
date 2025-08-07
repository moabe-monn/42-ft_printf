/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 08:45:12 by moabe             #+#    #+#             */
/*   Updated: 2025/05/01 13:53:52 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size == 0)
	{
		return (i);
	}
	while (j < size - 1 && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}

// int	main(void)
// {
// 	char src[] = "Hello, World!";
// 	char dest[20];
// 	unsigned int	size;
// 	unsigned int length;

// 	size = 0;
// 	length = ft_strlcpy(dest, src, size);
// 	printf("Original=%s\n", src);
// 	printf("Copied  =%s\n", dest);
// 	printf("Length=%d\n",length);
// 	printf("\n");
// 	size = 10;
// 	length = ft_strlcpy(dest, src, size);
// 	printf("Original=%s\n", src);
// 	printf("Copied  =%s\n", dest);
// 	printf("Length=%d\n",length);
// 	printf("\n");
// 	size = 0;
// 	length = ft_strlcpy(dest, src, size);
// 	printf("Original=%s\n", src);
// 	printf("Copied  =%s\n", dest);
// 	printf("Length=%d\n",length);
// 	printf("\n");
// 	size = 17;
// 	length = ft_strlcpy(dest, src, size);
// 	printf("Original=%s\n", src);
// 	printf("Copied  =%s\n", dest);
// 	printf("Length=%d\n",length);
// 	printf("\n");
// }
