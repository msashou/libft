/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:22:16 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/14 16:07:06 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (1)
	{
		if (*s == (char)c)
			return ((char *)s);
		if (*s == '\0')
			break ;
		s++;
	}
	return (NULL);
}

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
