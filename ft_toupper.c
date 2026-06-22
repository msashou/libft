/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:53:28 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/22 15:53:29 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ' ');
	else
		return (c);
}

// #include <stdio.h>

// int	main()
// {
// 	char	c1;
// 	char	c2;

// 	c1 = 'a';
// 	c2 = 'A';
// 	printf("%c\n", ft_toupper(c1));
// 	printf("%c\n", ft_toupper(c2));
// 	return (0);
// }
