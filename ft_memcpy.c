/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 00:35:41 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/16 17:21:56 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_cpy;
	const unsigned char	*src_cpy;

	dest_cpy = (unsigned char *)dest;
	src_cpy = (const unsigned char *)src;
	while (n--)
		*dest_cpy++ = *src_cpy++;
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[7] = "";
// 	char	src[] = "Hello.";
// 	int	dest1[3];
// 	int	src1[3] = {10000000, 200, 300};
// 	char	same_ft[] = "Hello.";
// 	char	*res_ft ;
// 	char	same_origin[] = "Hello.";
// 	char	*res_origin;
// 	void	*null_ptr;
// 	void	*null_res_ft;
// 	void	*null_res_origin;
// 	char	overlap_ft[] = "ABCDEF";
// 	char	overlap_origin[] = "ABCDEF";
// 	int	count;

// 	ft_memcpy(dest, src, 3);
// 	printf("%s\n", dest);

// 	memcpy(dest, src, 3);
// 	printf("%s\n", dest);

// 	ft_memcpy(dest1, src1, 3 * sizeof(int));
// 	count = 0;
// 	while (count < 3)
// 		printf("%d\n", dest1[count++]);
// 	memcpy(dest1, src1, 3 * sizeof(int));
// 	count = 0;
// 	while (count < 3)
// 		printf("%d\n", dest1[count++]);

// 	res_ft = ft_memcpy(same_ft, same_ft, 5);
// 	printf("%s, %d\n", same_ft, (res_ft == same_ft));
// 	res_origin = memcpy(same_origin, same_origin, 5);
// 	printf("%s, %d\n", same_origin, (res_origin == same_origin));

// 	null_ptr = NULL;
// 	null_res_ft = ft_memcpy(null_ptr, null_ptr, 0);
// 	printf("%p\n", null_res_ft);
// 	null_res_origin = memcpy(null_ptr, null_ptr, 0);
// 	printf("%p\n", null_res_origin);

// 	ft_memcpy(overlap_ft + 2, overlap_ft, 4);
// 	printf("%s\n", overlap_ft);
// 	memcpy(overlap_origin + 2, overlap_origin, 4);
// 	printf("%s\n", overlap_origin);

// 	return (0);
// }
