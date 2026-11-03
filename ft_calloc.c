/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/08 17:02:45 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/26 17:53:20 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total = (nmemb) * (size);
	if ((total / nmemb) != size)
		return (NULL);
	ptr = malloc(total);
	if (ptr != NULL)
		ft_bzero(ptr, total);
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
unsigned char	*ptr;
int	i;

ptr = ft_calloc(4, 1);
//this violation will force valgrind to show
//how many bytes we allocated
printf("%c", ptr[5]);
i = 0;
while (i < 20)
{
printf("The element at index %d: %d\n", i, ptr[i]);

i++;
}
free(ptr);
}*/
