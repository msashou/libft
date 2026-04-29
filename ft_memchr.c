/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 01:26:25 by smasatak          #+#    #+#             */
/*   Updated: 2026/04/30 02:09:09 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c1;
	size_t			i;

	str = (unsigned char *)s;
	c1 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == c1)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	c1[] = "Hello";
// 	int	c2 = 'e';
// 	printf("%s\n", (char *)ft_memchr(c1, c2, 5));
// 	return (0);
// }
