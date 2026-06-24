/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:22:16 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/24 06:13:22 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hello.";

// 	printf("%s\n", ft_strchr(str, 'e'));
// 	printf("%s\n", strchr(str, 'e'));

// 	printf("%s\n", ft_strchr(str, '\0'));
// 	printf("%s\n", strchr(str, '\0'));

// 	printf("%s\n", ft_strchr(str, 'x'));
// 	printf("%s\n", strchr(str, 'x'));

// 	return (0);
// }
