/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:51:35 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/22 17:07:26 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	t_list *node1 = malloc(sizeof(t_list));
// 	t_list *node2 = malloc(sizeof(t_list));
// 	t_list *node3 = malloc(sizeof(t_list));

// 	if (!node1 || !node2 || !node3)
// 		return (1);
// 	node1->content = "First";
// 	node2->content = "Second";
// 	node3->content = "Last";

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;

// 	t_list *last_node = ft_lstlast(node1);

// 	if (last_node != NULL)
// 		printf("Last node content: %s\n", (char *)last_node->content);
// 	else
// 		printf("List is empty.\n");

// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }
