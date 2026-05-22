/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masatakesasho <masatakesasho@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:28:39 by smasatak          #+#    #+#             */
/*   Updated: 2026/05/22 14:33:52 by masatakesas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (size - 1 > i && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
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
