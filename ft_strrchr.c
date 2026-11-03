/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/03 17:17:27 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/25 22:24:14 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	char	*temp;
	size_t	i;

	ptr = (char *) str;
	temp = NULL;
	i = 0;
	while (i <= ft_strlen(ptr))
	{
		if (ptr[i] == (unsigned char) c)
			temp = &ptr[i];
		i++;
	}
	return (temp);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
unsigned char	c;
char	str[] = "Hellwroo World0do";

c = 255;
printf("%p\n", ft_strrchr(str, c));
printf("%p\n", strrchr(str, c));
}*/
//I used unsigned char for c here
//due to the fact that the user may
//use integers above 127 to symbol
//the extended ascii (the user may input 255 as a value for c)
