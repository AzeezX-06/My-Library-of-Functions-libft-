/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putnbr_fd.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 16:55:48 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/27 16:55:48 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
		}
		if (n >= 0 && n <= 9)
			ft_putchar_fd((n + '0'), fd);
		else
		{
			ft_putnbr_fd((n / 10), fd);
			n %= 10;
			ft_putchar_fd((n + '0'), fd);
		}
	}
}
/*
#include <fcntl.h>
int	main(void)
{
int	fd;

fd = open("test", O_CREAT | O_WRONLY | O_TRUNC);
ft_putnbr_fd(2147483647, fd);
close(fd);
}*/
