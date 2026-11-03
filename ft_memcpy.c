/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/29 18:13:27 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/26 22:27:49 by ashabane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_a;
	unsigned char	*ptr_b;
	size_t			i;

	ptr_a = (unsigned char *) dest;
	ptr_b = (unsigned char *) src;
	i = 0;
	if (n == 0)
		return (ptr_a);
	if (!ptr_a || !ptr_b)
		return (NULL);
	while (i < n)
	{
		ptr_a[i] = ptr_b[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
unsigned char	str[] = {22, 127, -4};
unsigned char	str2[5];
int	i;
// Copies contents of str1 to str2
ft_memcpy(str2, str, 3);
printf("str2 after memcpy:\n");
i = 0;
while (i < 3)
{
printf("char %i = %d\n", i, str2[i]);
i++;
}
}*/
