/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:28:39 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/16 20:24:17 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i + 1 < size && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*src = "0123456789";
// 	char	dst[12];
// 	int	x = 10;
// 	printf("%zu\n", ft_strlcpy(dst,src, x));
// 	printf("%s\n", dst);
// 	return (0);
// }
