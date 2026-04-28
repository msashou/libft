/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masatakesasho <masatakesasho@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:21:46 by masatakesas       #+#    #+#             */
/*   Updated: 2026/04/28 15:24:09 by masatakesas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && src[j] != '\0')
	{
		i++;
		j++;
	}
	if (i >= size)
		return (size + j);
	else
	{
		return (i + j + 1);
		j = 0;
		while (i <= size - 1 && src[j] != '\0')
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	}
	dst[i] = '\0';
}

// int main(void)
// {
// 	char dst[20] = "Hello,";
// 	const char	src[] = "42.";
// 	printf("%zu\n", ft_strlcat(dst, src, 10));
// 	printf("%s", dst);
// 	return (0);
// }
