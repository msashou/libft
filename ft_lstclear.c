/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:51:08 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/22 18:26:38 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;

	if (!lst || !*lst || !del)
		return ;
	while (*lst != NULL)
	{
		node = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(node, del);
	}
	*lst = NULL;
}

// #include <stdio.h>

// void    delete_content(void *content)
// {
// 	printf("Del: %s\n", (char *)content);
// 	free(content);
// }

// int     main(void)
// {
// 	t_list	*n1 = malloc(sizeof(t_list));
// 	t_list	*n2 = malloc(sizeof(t_list));
// 	t_list	*n3 = malloc(sizeof(t_list));

// 	if (!n1 || !n2 || !n3)
// 		return (1);

// 	n1->content = strdup("Node1");
// 	n2->content = strdup("Node2");
// 	n3->content = strdup("Node3");

// 	n1->next = n2;
// 	n2->next = n3;
// 	n3->next = NULL;

// 	t_list	*head = n1;

// 	printf("--- Before clear: head = %p ---\n", (void *)head);

// 	ft_lstclear(&head, delete_content);

// 	printf("--- After clear ---\n");
// 	printf("head = %p\n", (void *)head);

// 	return (0);
// }