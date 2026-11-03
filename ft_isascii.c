/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/27 16:51:41 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/26 22:42:59 by ashabane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int ch)
{
	if (ch >= 0 && ch <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int     main(void)
{
//char    c;
//int     i;

i = 0;
(void) argc;
while (argv[1][i])
{
c = argv[1][i];
printf("%d - ", isascii(c));
printf("%d\n", ft_isascii(c));
i++;
}

printf("%d\n", isascii(256));
printf("%d\n", ft_isascii(256));
return (0);
}*/
