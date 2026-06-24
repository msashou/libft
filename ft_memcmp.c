/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 02:10:42 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/24 06:47:19 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*s1;
// 	const char	*s2;

// 	s1 = "42Tokyo";
// 	s2 = "42Paris";
// 	printf("%d\n", ft_memcmp(s1, s2, 4));
// 	return (0);
// }
