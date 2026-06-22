/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:51:02 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/22 17:23:55 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*head = NULL;

// 	t_list	*node1 = ft_lstnew("One");
// 	t_list	*node2 = ft_lstnew("Two");
// 	t_list	*node3 = ft_lstnew("Three");

// 	ft_lstadd_front(&head, node1);
// 	ft_lstadd_front(&head, node2);
// 	ft_lstadd_front(&head, node3);
// 	ft_lstadd_front(NULL, NULL);
// 	ft_lstadd_front(&head, NULL);

// 	t_list	*print_ptr = head;
// 	while (print_ptr)
//         {
// 		printf("[%s] -> ", (char *)print_ptr->content);
// 		print_ptr = print_ptr->next;
//         }
// 	printf("NULL\n");

// 	t_list	*tmp;
// 	while (head)
// 	{
// 		tmp = head->next;
// 		free(head);
// 		head = tmp;
// 	}

// 	return (0);
// }