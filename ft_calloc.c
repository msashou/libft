/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 21:28:27 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/24 06:43:26 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	res = (void *)malloc(nmemb * size);
	if (!res)
		return (NULL);
	ft_bzero(res, nmemb * size);
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*arr1 = ft_calloc(5, sizeof(int));
// 	int	*arr2 = calloc(5, sizeof(int));
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	while (i < 5)
// 	{
// 		printf("%d\n", arr1[i]);
// 		i++;
// 	}
// 	while (j < 5)
// 	{
// 		printf("%d\n", arr2[j]);
// 		j++;
// 	}

// 	void	*p1 = ft_calloc(18446744073709551615UL, 2);
// 	void	*p2 = calloc(18446744073709551615UL, 2);

// 	printf("%p\n", p1);
// 	printf("%p\n", p2);

// 	void *p0 = ft_calloc(0, 10);
// 	void *p3 = ft_calloc(10, 0);

// 	void *p4 = calloc(0, 10);
// 	void *p5 = calloc(10, 0);

// 	printf("%p\n", p0);
// 	printf("%p\n", p3);
// 	printf("%p\n", p4);
// 	printf("%p\n", p5);

// 	printf("%s\n", (char *)p3);

// 	free(arr1);
// 	free(arr2);
// 	free(p1);
// 	free(p2);
// 	free(p0);
// 	free(p3);
// 	free(p4);
// 	free(p5);

// 	return (0);
// }
