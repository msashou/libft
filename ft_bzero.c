/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 12:15:36 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/16 17:21:26 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		((unsigned char *)s)[n] = '\0';
	return ;
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hello.";
// 	char	str1[] = "Hello.";
// 	int	i;

// 	i = 0;
// 	ft_bzero(str, 3);
// 	while (i < 7)
// 	{
// 		printf("str[%d] = %d\n", i, (int)str[i]);
// 		i++;
// 	}
// 	bzero(str1, 3);
// 	i = 0;
// 	while (i < 7)
// 	{
// 		printf("str[%d] = %d\n", i, (int)str[i]);
// 		i++;
// 	}
// 	return (0);
// }
