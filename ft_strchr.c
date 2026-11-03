/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/03 16:18:57 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/25 22:17:14 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;

	ptr = (char *) str;
	while (*ptr != (unsigned char) c)
	{
		if (*ptr == '\0')
			return (NULL);
		ptr++;
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
char	str[] = "Hello";
char	c;

c = '8';
printf("%p\n" ,ft_strchr(str, c));
printf("%p\n" ,strchr(str, c));
}*/
