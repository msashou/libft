/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:51:52 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/22 16:54:46 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	n;

	n = 0;
	while (lst != NULL)
	{
		lst = lst -> next;
		n++;
	}
	return (n);
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list	*node1 = malloc(sizeof(t_list));
// 	t_list	*node2 = malloc(sizeof(t_list));
// 	t_list	*node3 = malloc(sizeof(t_list));

// 	if (!node1 || !node2 || !node3)
//         	return (0);

// 	node1 -> next = node2;
// 	node2 -> next = node3;
// 	node3 -> next = NULL;

// 	printf("%d\n", ft_lstsize(node3));

// 	free (node1);
// 	free (node2);
// 	free (node3);
// 	return (0);
// }