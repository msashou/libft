/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:23:26 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/24 10:47:25 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
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

// 	ft_memmove(dest, src, 3);
// 	printf("%s\n", dest);

// 	memmove(dest, src, 3);
// 	printf("%s\n", dest);

// 	ft_memmove(dest1, src1, 3 * sizeof(int));
// 	count = 0;
// 	while (count < 3)
// 		printf("%d\n", dest1[count++]);
// 	memmove(dest1, src1, 3 * sizeof(int));
// 	count = 0;
// 	while (count < 3)
// 		printf("%d\n", dest1[count++]);

// 	res_ft = ft_memmove(same_ft, same_ft, 5);
// 	printf("%s, %d\n", same_ft, (res_ft == same_ft));
// 	res_origin = memmove(same_origin, same_origin, 5);
// 	printf("%s, %d\n", same_origin, (res_origin == same_origin));

// 	null_ptr = NULL;
// 	null_res_ft = ft_memmove(null_ptr, null_ptr, 0);
// 	printf("%p\n", null_res_ft);
// 	null_res_origin = memmove(null_ptr, null_ptr, 0);
// 	printf("%p\n", null_res_origin);

// 	ft_memmove(overlap_ft + 2, overlap_ft, 4);
// 	printf("%s\n", overlap_ft);
// 	memmove(overlap_origin + 2, overlap_origin, 4);
// 	printf("%s\n", overlap_origin);

// 	return (0);
// }
