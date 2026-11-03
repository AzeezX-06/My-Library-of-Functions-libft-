/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putstr_fd.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 18:32:24 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/25 18:32:24 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/*
#include <fcntl.h>
//stands for file control
int	main(void)
{
char	s[] = "Am I in the test file?";
int	fd;

fd = open("test", O_CREAT | O_WRONLY | O_TRUNC);
//O_ stands for open
ft_putstr_fd(s, fd);
close(fd);
}*/
