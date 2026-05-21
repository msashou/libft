/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masatakesasho <masatakesasho@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 18:41:43 by masatakesas       #+#    #+#             */
/*   Updated: 2026/05/21 18:56:45 by masatakesas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;

	if (!*lst || !del)
		return ;
	while (*lst != NULL)
	{
		node = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(node, del);
	}
	*lst = NULL;
}
