/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstclear.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 18:05:54 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/26 20:34:01 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	del(void *content)
{
(void) content;
}
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	lst = NULL;
}
/*
int	main(void)
{
t_list	*node1;
t_list	*node2;
t_list	*node3;

//ft_lstclear(NULL, del);
node1 = ft_lstnew("I am node 1");
node2 = ft_lstnew("I am node 2");
node3 = ft_lstnew("I am node 3");
node1 -> next = node2;
node2 -> next = node3;
ft_lstclear(NULL, del);
}*/
