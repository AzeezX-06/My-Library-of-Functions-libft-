/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 16:54:34 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/27 16:54:34 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		char_no;
	long	num;

	num = n;
	char_no = get_len(num);
	str = malloc(char_no * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[char_no] = '\0';
	if (num < 0)
	{
		num *= -1;
		str[0] = '-';
	}
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[--char_no] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
char	*str;

str = ft_itoa(-1238);
printf("%s", str);
free (str);
}*/
