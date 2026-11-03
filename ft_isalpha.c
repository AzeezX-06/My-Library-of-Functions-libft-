/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/27 15:02:52 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/25 19:00:54 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int ch)
{
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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
printf("%d - ", isalpha(c));
printf("%d\n", ft_isalpha(c));
i++;
}
return (0);
}*/
