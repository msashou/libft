/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:00:41 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/16 17:15:57 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%d\n", ft_isprint('A'));
// 	printf("%d\n", ft_isprint(' '));
// 	return (0);
// }
