/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masatakesasho <masatakesasho@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 11:14:35 by masatakesas       #+#    #+#             */
/*   Updated: 2026/05/13 15:08:26 by masatakesas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		count;
	char	*res;
	long	nmb;

	count = 0;
	nmb = n;
	if (n <= 0)
		count++;
	while (nmb !=0)
	{
		nmb /= 10;
		count++;
	}
	res = (char *)malloc(count + 1);
	if (!res)
		return (NULL);
	res[count] = '\0';
	nmb = n;
	if (nmb < 0)
		nmb = -nmb;
	if (nmb == 0)
		res[0] = '0';
	while (nmb != 0)
	{
		res[count - 1] = (nmb % 10) + 48;
		nmb /= 10;
		count--;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Testing ft_itoa...\n");
// 	printf("%s\n", ft_itoa(42));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(0));
// 	return (0);
// }
