/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 22:33:02 by smasatak          #+#    #+#             */
/*   Updated: 2026/04/30 01:10:44 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char		c1;
	const char	*start;

	c1 = (char *)c;
	start = s;
	while (*s != '\0')
		s++;
	while (s >= start)
	{
		if (*s == c1)
			return ((char *)s);
		s--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	c1[] = "Hello";
// 	char	c2 = 'H';

// 	printf("%s", ft_strrchr(c1, c2));
// 	return (0);
// }
