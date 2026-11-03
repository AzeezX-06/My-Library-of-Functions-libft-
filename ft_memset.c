/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/28 15:23:28 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/25 19:14:23 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *) str;
	while (i < n)
	{
		*ptr = (unsigned char) c;
		ptr++;
		i++;
	}
	return (str);
}

/*
#include <string.h>
#include <unistd.h>
int	main(void)
{
char	buffer[] = "Hello";
printf("%s\n",(char*)ft_memset(buffer, 163, 3));
printf("%s",(char*)memset(buffer, 163, 3));
return (0);
}
*/
