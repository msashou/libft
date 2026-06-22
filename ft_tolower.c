/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:53:08 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/22 15:53:10 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ' ');
	else
		return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c1;
// 	char	c2;

// 	c1 = 'A';
// 	c2 = 'a';
// 	printf("%c\n", ft_tolower(c1));
// 	printf("%c\n", ft_tolower(c2));
// 	return (0);
// }
