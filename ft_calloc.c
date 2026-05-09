/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 21:28:27 by smasatak          #+#    #+#             */
/*   Updated: 2026/05/06 18:04:32 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t		total_size;
	size_t			i;
	unsigned char	*str;
	void		*ptr;

	if (nmemb != 0 && size > __SIZE_MAX__ / nmemb)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	str = (unsigned char *)ptr;
	i = 0;
	while (i < total_size)
	{
		str[i] = 0;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	int	*arr;
// 	size_t	n = 5;
// 	size_t	i;

// 	printf("Attempting to allocate %zu ints...\n", n);
// 	arr = (int*)ft_calloc(n, sizeof(int));

// 	if (!arr)
// 	{
// 		printf("Allocation failed.\n");
// 		return (1);
// 	}
// 	printf("Checking initialization:\n");
// 	i = 0;
// 	while (i < n)
// 	{
// 		printf ("arr[%zu]: %d\n", i, arr[i]);
// 		i++;
// 	}
// 	free(arr);
// 	printf("Memory freed.\n");

// 	return (0);
// }
