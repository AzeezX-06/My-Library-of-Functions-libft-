/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlen.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/27 17:28:52 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/25 19:02:02 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *ptr)
{
	size_t	len;

	len = 0;
	while (ptr[len])
		len++;
	return (len);
}
/*
#include <string.h>
int	main(void)
{
char	*ptr = "123\0123";
printf("%lu - ", ft_strlen(ptr));
printf("%lu\n", strlen(ptr));
}*/
