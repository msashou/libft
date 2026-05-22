/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masatakesasho <masatakesasho@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:59:13 by smasatak          #+#    #+#             */
/*   Updated: 2026/05/22 14:14:01 by masatakesas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int	main(void)
// {
// 	int	n;
// 	int	n2;

// 	n = '0';
// 	n2 = '!';
// 	printf("testing n...%d\n",ft_isdigit(n));
// 	printf("testing n2...%d\n", ft_isdigit(n2));
// 	return (0);
// }
