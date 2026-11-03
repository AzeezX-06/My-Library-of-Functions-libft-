/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_bzero.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 16:54:15 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/27 16:54:15 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	ft_memset(ptr, 0, n);
}
/*
#include <stdio.h>
int	main(void)
{
char	ptr[] = "Hello";
ft_bzero(ptr, 2);
printf("%c\n", ptr[1]);
}*/
