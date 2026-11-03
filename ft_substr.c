/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabane <ashabane@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 17:12:23 by ashabane          #+#    #+#             */
/*   Updated: 2026/10/27 17:16:50 by ashabane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*alloc_cpy(char *str, unsigned int start,
	size_t	len, size_t permitted_len)
{
	char	*substr;

	if (len < permitted_len)
	{
		substr = malloc(len * sizeof(char) + 1);
		if (substr == NULL)
			return (NULL);
		ft_memcpy(substr, str + start, len);
		substr[len] = '\0';
	}
	else
	{
		substr = malloc(permitted_len * sizeof(char) + 1);
		if (substr == NULL)
			return (NULL);
		ft_memcpy(substr, str + start, permitted_len);
		substr[permitted_len] = '\0';
	}
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*substr;
	size_t	str_len;
	size_t	permitted_len;

	str = (char *) s;
	if (str == NULL)
		return (NULL);
	str_len = ft_strlen(str);
	if ((len == 0) || (str_len == 0) || (start > str_len))
		permitted_len = 0;
	else
		permitted_len = str_len - start;
	substr = alloc_cpy(str, start, len, permitted_len);
	return (substr);
}
/*
#include <stdio.h>
int	main(void)
{
char	str[] = "01234";
char	*ptr;

ptr = ft_substr(str, 0, 0);
printf("%s\n", ptr);
free(ptr);
}*/
