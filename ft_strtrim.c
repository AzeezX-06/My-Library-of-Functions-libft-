/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/15 17:30:59 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/26 18:44:26 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*substr;
	char	*result;
	size_t	start;
	size_t	end;

	str = (char *) s1;
	substr = (char *) set;
	if (!str || !substr)
		return (NULL);
	start = 0;
	if (str[0] == '\0')
		return (ft_strdup(""));
	end = ft_strlen(str) - 1;
	while (str[start] && (ft_strchr(set, str[start])))
		start++;
	while (str[end] && (ft_strchr(set, str[end])))
		end--;
	if (start > end)
		return (ft_strdup(""));
	result = ft_substr(str, start, end - start + 1);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
char	s1[] = "cccccc";
char	set[] = "c";
char	*result;

result = ft_strtrim(s1, set);
printf("%s", result);
free(result);
}
*/
