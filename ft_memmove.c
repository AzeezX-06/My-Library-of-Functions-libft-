/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/30 10:06:47 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/25 20:38:38 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_c;
	unsigned char	*src_c;

	dest_c = (unsigned char *) dest;
	src_c = (unsigned char *) src;
	if (n == 0 || dest_c == src_c)
		return (dest);
	if (dest < src)
	{
		ft_memcpy(dest, src, n);
		return (dest);
	}
	while (n > 0)
	{
		dest_c[n - 1] = src_c[n - 1];
		n--;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
unsigned char	str[] = "Hello";
unsigned char	str2[] = "Hello";
unsigned char   str3[] = "Hello";
ft_memmove(str + 2, str, 4);
memmove(str2 + 2, str2, 4);
memcpy(str3 + 2, str3, 4);
printf("%s\n", str);
printf("%s\n", str2);
printf("%s\n", str3);
}*/
