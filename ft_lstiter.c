/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:51:29 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/22 18:26:16 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// // #include <stdio.h>

// // void    to_upper(void *content)
// // {
// //     char *str = (char *)content;
// //     int i = 0;

// //     while (str[i])
// //     {
// // 	if (str[i] >= 'a' && str[i] <= 'z')
// // 		str[i] -= 32;
// // 	i++;
// //     }
// // }

// // int     main(void)
// // {
// // 	t_list	*n1 = malloc(sizeof(t_list));
// // 	t_list	*n2 = malloc(sizeof(t_list));
// // 	t_list	*n3 = malloc(sizeof(t_list));

// // 	if (!n1 || !n2 || !n3)
// // 		return (1);

// // 	n1->content = ft_strdup("apple");
// // 	n2->content = ft_strdup("banana");
// // 	n3->content = ft_strdup("cherry");
// // 	n1->next = n2;
// // 	n2->next = n3;
// // 	n3->next = NULL;

// // 	printf("--- Before ---\n");
// // 	printf("%s -> %s -> %s\n", (char *)n1->content,
// 		// (char *)n2->content, (char *)n3->content);

// // 	ft_lstiter(n1, to_upper);

// // 	printf("--- After ---\n");
// // 	printf("%s -> %s -> %s\n", (char *)n1->content,
// 		(char *)n2->content, (char *)n3->content);

// // 	free(n1->content);
// // 	free(n1);
// // 	free(n2->content);
// // 	free(n2);
// // 	free(n3->content);
// // 	free(n3);

// // 	return (0);
// // }