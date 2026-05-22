/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masatakesasho <masatakesasho@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:21:46 by masatakesas       #+#    #+#             */
/*   Updated: 2026/05/22 14:46:03 by masatakesas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	dst_len;
	size_t	src_len;
	size_t	re_dstlen;

	i = 0;
	dst_len = ft_strlen(dst);
	re_dstlen = dst_len;
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	else
	{
		while (dst_len < size - 1 && src[i] != '\0')
		{
			dst[dst_len] = src[i];
			dst_len++;
			i++;
		}
	}
	dst[dst_len] = '\0';
	return (re_dstlen + src_len);
}

// int main(void)
// {
// 	char dst[20] = "Hello,";
// 	const char	src[] = "42.";
// 	printf("%zu\n", ft_strlcat(dst, src, 10));
// 	printf("%s", dst);
// 	return (0);
// }
