/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:51:39 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/22 18:27:43 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_lst;
	void	*content;

	new_lst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		content = f(lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new);
		lst = lst->next;
	}
	return (new_lst);
}

// #include <stdio.h>

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*new = malloc(sizeof(t_list));
// 	if (!new)
// 		return (NULL);
// 	new->content = content;
// 	new->next = NULL;
// 	return (new);
// }

// void	*copy_and_uppercase(void *content)
// {
// 	char	*src = (char *)content;
// 	char	*dst = strdup(src);
// 	if (!dst)
// 		return (NULL);

// 	int	i = 0;

// 	while (dst[i])
// 	{
// 		if (dst[i] >= 'a' && dst[i] <= 'z')
// 			dst[i] -= 32;
//         	i++;
// 	}
// 	return (dst);
// }

// void	delete_content(void *content)
// {
// 	free(content);
// }

// int     main(void)
// {

// 	t_list	*n1 = ft_lstnew("cats");
// 	t_list	*n2 = ft_lstnew("dogs");
// 	n1->next = n2;

// 	printf("--- Original List ---\n");
// 	printf("%s -> %s\n", (char *)n1->content, (char *)n2->content);

// 	t_list	*new_list = ft_lstmap(n1, copy_and_uppercase, delete_content);

// 	printf("--- After ft_lstmap ---\n");
// 	printf("Original: %s -> %s\n", (char *)n1->content, (char *)n2->content);
// 	if (new_list)
// 		printf("New List: %s -> %s\n",
// 			(char *)new_list->content, (char *)new_list->next->content);

// 	free(n1);
// 	free(n2); 
// 	ft_lstclear(&new_list, delete_content);

// 	return (0);
// }