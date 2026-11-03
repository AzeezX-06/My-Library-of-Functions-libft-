/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstsize.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 16:55:22 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/27 16:55:22 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	counter;
	t_list			*ptr;

	counter = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		counter++;
	}
	return (counter);
}
