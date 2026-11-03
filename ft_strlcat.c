/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/03 15:13:44 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/25 21:24:49 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dst_len >= size)
		return (size + src_len);
	while ((i < size - dst_len - 1) && (src[i]))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*

#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
char	dest1[30] = "Abood";
char	dest[30] = "Abood";
char	src[] = "Omar";

int strlcat_res = strlcat(dest1, src, 4); //sizeof(dest1));
printf("%s %d\n",dest1 ,strlcat_res);
printf("%s %zu", dest, ft_strlcat(dest, src, 4));//sizeof(dest)));
}*/
/*the return value in line 26
* utilizes size instead of dst_len
* in order to match the original function's
* behaviour in the case of dst_len being
*  greater than the buffer size;
*/
