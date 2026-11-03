/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strjoin.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/12 18:36:56 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/25 18:32:49 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*joint_str;
	size_t	str1_len;
	size_t	str2_len;

	if (!s1 || !s2)
		return (NULL);
	str1 = (char *) s1;
	str2 = (char *) s2;
	str1_len = ft_strlen(str1);
	str2_len = ft_strlen(str2);
	joint_str = malloc((str1_len + str2_len + 1) * sizeof(char));
	if (!joint_str)
		return (NULL);
	ft_memcpy(joint_str, str1, str1_len);
	ft_memcpy(joint_str + str1_len, str2, str2_len);
	joint_str[str1_len + str2_len] = '\0';
	return (joint_str);
}

/*#include <stdio.h>
int	main(void)
{
char	s1[] = "Hello, ";
char	s2[] = "World!";
char	*ptr;

ptr = ft_strjoin(s1, s2);
printf("%s", ptr);
free(ptr);
}*/
//the second ft_memcpy can be rapleced with
//ft_strlcat(joint_str, str2, joint_str_size)
//however, that will require more time,memory as strlcat
//will calculate lengths again
//
//I have faced a norminette error:
//"Too many variables declarations in a function"
//so I stoped using str1_len, str2_len
