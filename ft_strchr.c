/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masatakesasho <masatakesasho@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:22:16 by smasatak          #+#    #+#             */
/*   Updated: 2026/05/13 15:08:30 by masatakesas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
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

// int	main(void)
// {
// 	const char	s[] = "Hello";
// 	int	c;

// 	c = 'o';
// 	printf("%s\n", ft_strchr(s,c));
// }
