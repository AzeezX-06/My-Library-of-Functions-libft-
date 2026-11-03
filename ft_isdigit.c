/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isdigit.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/27 15:58:53 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/25 19:01:14 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(int argc, char** argv)
{
char	c;
int	i;

i = 0;
(void) argc;
while (argv[1][i])
{
c = argv[1][i];
printf("%d - ", isdigit(c));
printf("%d\n", ft_isdigit(c));
i++;
}
return (0);
}*/
