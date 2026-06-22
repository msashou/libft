/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:50:53 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/22 18:19:47 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)-> next = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*head = NULL;

// 	t_list	*node1 = ft_lstnew("One");
// 	t_list	*node2 = ft_lstnew("Two");
// 	t_list	*node3 = ft_lstnew("Three");

// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);
// 	ft_lstadd_back(NULL, NULL);
// 	ft_lstadd_back(&head, NULL);

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