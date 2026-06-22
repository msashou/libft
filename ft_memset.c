/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:19:08 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/18 12:42:39 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = (unsigned char)c;
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = (char *)malloc(sizeof(char) * 6);
// 	if (!s1)
// 		return (0);
// 	s1 = (char *)ft_memset(s1, 'Z', 5);
// 	s1[5] = '\0';

// 	s2 = (char *)malloc(sizeof(char) * 6);
// 	if (!s2)
// 		return (0);
// 	s2 = (char *)memset(s2, 'Z', 5);
// 	s2[5] = '\0';
// 	printf("%s\n", s1);
// 	printf("%s\n", s2);

// 	free(s1);
// 	free(s2);
// 	return (0);
// }
