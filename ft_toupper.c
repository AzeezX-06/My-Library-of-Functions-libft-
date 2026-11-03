/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_toupper.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/03 15:34:46 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/25 21:31:23 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
unsigned char	c;

c = 68;
printf("%c\n", ft_toupper(c));
printf("%c\n", toupper(c));
}*/
