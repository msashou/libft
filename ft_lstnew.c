/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:51:48 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/22 15:55:09 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	content[] = "42Network";
// 	t_list	*res;

// 	res = ft_lstnew(content);
// 	printf("%s\n", (char *)res->content);

// 	free(res);
// 	return (0);
// }
