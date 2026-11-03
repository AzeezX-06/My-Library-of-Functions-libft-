/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strmapi.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 16:56:20 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/27 16:56:20 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static char	function(unsigned int n, char c)
{
c += n;
return (c);
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*result;
	unsigned int	i;

	i = 0;
	str = (char *) s;
	if (!str || !f)
		return (NULL);
	result = malloc(ft_strlen(str) + 1);
	if (!result)
		return (NULL);
	while (str[i])
	{
		result[i] = f(i, str[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
char	s[] = "ABCD";
char	*ptr;
ptr = ft_strmapi(s, function);
printf("%s", ptr);
free (ptr);
}*/
