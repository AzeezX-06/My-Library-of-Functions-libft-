/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcpy.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/30 14:36:42 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/25 21:03:56 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	if (size > 0)
	{
		size -= 1;
		while (size && src[len])
		{
			dest[len] = src[len];
			len++;
			size--;
		}
		dest[len] = '\0';
	}
	while (src[len])
		len++;
	return (len);
}

/*
#include <stdio.h>
#include <bsd/string.h>
int     main(void)
{
char    src[] = "Am I fully copied?";
char    dest[7];
char	dest2[7];
int     return_value;

return_value = ft_strlcpy(dest, src, 7);
return_value = strlcpy(dest2, src, 7);
printf("%s \nThe src length is: %d\n", dest, return_value);
printf("%s \nThe src length is: %d", dest2, return_value);
}*/
