/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:51:20 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/22 17:35:54 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del (lst -> content);
	free (lst);
}

// #include <stdio.h>

// void	delete_content(void *content)
// {
// 	printf("Del: %s\n", (char *)content);
// 	free(content);
// }

// int     main(void)
// {
// 	t_list	*node = malloc(sizeof(t_list));

// 	if (!node)
// 		return (0);
// 	node->content = ft_strdup("Target Data");
// 	node->next = NULL;

// 	printf("--- Before ft_lstdelone ---\n");
// 	printf("Node address: %p\n", (void *)node);

// 	ft_lstdelone(node, delete_content);
// 	node = NULL;

// 	printf("--- After ft_lstdelone ---\n");
// 	printf("Node and content have been freed safely.\n");

// 	return (0);
// }