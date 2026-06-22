/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:03:49 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/16 17:02:59 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isalnum('1'));
// 	printf("%d\n", ft_isalnum('A'));
// 	printf("%d\n", ft_isalnum('Z'));
// }
