/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masatakesasho <masatakesasho@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 22:33:02 by smasatak          #+#    #+#             */
/*   Updated: 2026/05/13 15:08:33 by masatakesas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char		c1;
	const char	*start;

	c1 = (char)c;
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
// 	char	c2 = 'Hello';

// 	printf("%s", ft_strrchr(c1, c2));
// 	return (0);
// }
