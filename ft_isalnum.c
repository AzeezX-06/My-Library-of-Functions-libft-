/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isalnum.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/27 16:36:30 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/25 19:01:21 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
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
printf("%d - ", isalnum(c));
printf("%d\n", ft_isalnum(c));
i++;
}
return (0);
}*/
