/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 01:26:25 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/16 20:53:32 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
	}
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
//     char *res = ft_memchr("Hello", 'e', 4);

//     if (res != NULL)
//     {
//         printf("%c\n", *res);
//         printf("%s\n", res);
//         printf("%p\n", (void *)res);
//     }
//     return (0);
// }