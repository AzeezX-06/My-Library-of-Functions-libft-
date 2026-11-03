/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isprint.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/27 17:05:38 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/25 19:01:30 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int ch)
{
	unsigned char	c;

	c = ch;
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int     main(int argc, char** argv)
{
char    c;
int     i;

i = 0;
(void) argc;
while (argv[1][i])
{
c = argv[1][i];
printf("%d - ", isprint(c));
printf("%d\n", ft_isprint(c));
i++;
}
return (0);
}*/
