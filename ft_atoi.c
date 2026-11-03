/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/07 12:31:56 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/26 14:54:27 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char	*ptr;
	int		minus;
	int		i;
	long	sum;

	ptr = (char *) nptr;
	i = 0;
	while ((ptr[i] >= 9 && ptr[i] <= 13) || ptr[i] == 32)
		i++;
	minus = 0;
	if (ptr[i] == '-' || ptr[i] == '+')
	{
		if (ptr[i] == '-')
			minus++;
		i++;
	}
	sum = 0;
	while ((ptr[i] >= '0' && ptr[i] <= '9') && ptr[i])
	{
		sum = (ptr[i] - '0') + (sum * 10);
		i++;
	}
	if (minus == 1)
		sum *= -1;
	return ((int) sum);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
char	str[] = "-2147483648";

printf("%d\n" ,ft_atoi(str));
//	printf("%d\n" ,atoi(str));
}*/
