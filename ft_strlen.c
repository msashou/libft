/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:54:53 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/16 17:19:54 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (s[n] != '\0')
		n++;
	return (n);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "0123456789";

// 	printf("%zu\n", ft_strlen(str));
// 	printf("%zu\n", ft_strlen("123456789"));
// 	return (0);
// }