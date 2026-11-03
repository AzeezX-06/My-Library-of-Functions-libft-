/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 16:55:56 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/27 16:55:56 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **res, size_t nmemb)
{
	size_t	i;

	i = 0;
	while (i < nmemb)
	{
		if (res[i])
			free(res[i]);
		i++;
	}
	free(res);
}

static size_t	word_len(char *start, char c)
{
	size_t	len;

	len = 0;
	while ((start[len]) && (start[len] != c))
	{
		len++;
	}
	return (len);
}

static size_t	word_count(char const *s, char c)
{
	char	*str;
	size_t	i;
	size_t	count;

	str = (char *) s;
	i = 0;
	count = 0;
	if (!str || s[0] == '\0')
		return (0);
	while (str[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**split(char *str, char c, size_t wc, char **result)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (i < wc)
	{
		while (*str && *str == c)
			str++;
		len = word_len(str, c);
		result[i] = ft_substr(str, 0, len);
		if (!result[i])
		{
			free_all(result, i);
			return (NULL);
		}
		str += len;
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	ch[2];
	char	**result;
	size_t	wc;

	if (!s)
		return (NULL);
	ch[0] = c;
	ch[1] = '\0';
	str = ft_strtrim((char *) s, ch);
	if (!str)
		return (NULL);
	wc = word_count(str, c);
	result = malloc(sizeof(char *) * (wc + 1));
	if (!result)
	{
		free(str);
		return (NULL);
	}
	result = split(str, c, wc, result);
	free(str);
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
char	s[] = "AM I splitted    ?   ";
char	c = ' ';
char	car[] = " ";
char	**res;
char	*ptr;
int	i;
int	wc;
//	int	wl1;
//	int	wl2;
//	int	wl3;

//static functions tester

wc = word_count(s, c);
wl1 = word_len(s, c);
wl2 = word_len(s + wl1 + 1, c);
wl3 = word_len(s + wl1 + wl2 + 2, c);
printf("Word Count: %d\n", wc);
printf("Word Len 1 2 3: %d %d %d\n", wl1, wl2, wl3);

res = ft_split(s, c);
ptr = ft_strtrim(s, car);
wc = word_count(ptr, c);
i = 0;
while (i < wc)
{
printf("Elem: %s\n", res[i]);
i++;
}
free_all(res, wc + 1);
free(ptr);
}
*/
//result = malloc(sizeof(char) * (wc + 1));
// +1 for the NULL at the end {s1, s2, s3, NULL};
