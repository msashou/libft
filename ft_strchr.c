/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:22:16 by smasatak          #+#    #+#             */
/*   Updated: 2026/04/29 14:49:17 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char*	ft_strchr(const char *s, int c)
{
	while (1)
	{
		if (*s == c)
			return ((char *)s);
		if (*s == '\0')
			break;
		s++;
	}
	return (NULL);
}

int	main(void)
{
	const char	s[] = "Hello";
	char	c1 = 'e';

	printf("%s\n", ft_strchr(s, c1));
}
