/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/03 21:14:31 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/26 14:52:57 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*str;
	char	*sub_str;
	size_t	i;
	size_t	sub_len;

	str = (char *) big;
	sub_str = (char *) little;
	i = 0;
	if (!sub_str[0])
		return (str);
	sub_len = ft_strlen(sub_str);
	while ((i < len) && (*str))
	{
		if ((*str == sub_str[0]) && (sub_len <= len - i))
		{
			if (!ft_strncmp(str, sub_str, sub_len))
				return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
char	big[] = "Hello";
char	little[] = "lo";

printf("%s\n", ft_strnstr(big, little, 4));
printf("%s\n", strnstr(big, little, 4));
}*/
