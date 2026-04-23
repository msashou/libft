/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:29:59 by smasatak          #+#    #+#             */
/*   Updated: 2026/04/23 19:07:30 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalpha(int	c)
{
	return ((c >= 'A' && c <= 'Z') ||  (c >= 'a' && c<= 'z'));
}

int	main(void)
{
	printf("%d", ft_isalpha('A'));
	printf("%d", ft_isalpha('1'));
	return (0);
}
