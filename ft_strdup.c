/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/08 17:56:58 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/26 18:08:27 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	src_len;
	char	*ptr;

	src_len = ft_strlen((char *) s);
	ptr = malloc(src_len * sizeof(char) + 1);
	if (ptr == NULL)
		return (ptr);
	ft_memcpy(ptr, s, src_len + 1);
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
char	s[] = "AM I copied";
char	*ptr;

ptr = ft_strdup(s);
printf("%s", ptr);
free(ptr);
}*/
