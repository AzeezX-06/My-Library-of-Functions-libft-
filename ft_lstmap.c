/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstmap.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ashabane <ashabane@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 16:55:10 by ashabane         #+#    #+#              */
/*   Updated: 2026/10/27 16:55:10 by ashabane        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	*function(void *node)
{
int	*ptr;

ptr = malloc(sizeof(int));
if (!ptr)
return (NULL);
*ptr = *((int *) node) + 1;
return (ptr);
}
void	del(void *node)
{
free(node);
}
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new_node;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	if (!head)
		return (NULL);
	current = head;
	lst = lst->next;
	while (lst != NULL)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		current->next = new_node;
		current = new_node;
		lst = lst->next;
	}
	return (head);
}
/*
#include <stdio.h>
int	main(void)
{
int	*p1 = malloc(sizeof(int));
int	*p2 = malloc(sizeof(int));
int	*p3 = malloc(sizeof(int));
*p1 = 1;
*p2 = 2;
*p3 = 3;
t_list	*result;
t_list	*node1 = ft_lstnew(p1);
t_list	*node2 = ft_lstnew(p2);
t_list	*node3 = ft_lstnew(p3);
ft_lstadd_back(&node1, node2);
ft_lstadd_back(&node2, node3);
//	ft_lstmap(l1, map_test_dup, NULL)
result = ft_lstmap(node1, function, del);
printf("Node1: %d\nNode2: %d\nNode3: %d\n",
*(int *) (result -> content),
*(int *) ((result -> next) -> content),
*(int *) (((result -> next) -> next) -> content));
ft_lstclear(&result, del);
}
*/
