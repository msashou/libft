/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:50:45 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/22 17:46:42 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_digits(long nmb)
{
	int	count;

	count = 0;
	if (nmb <= 0)
		count++;
	while (nmb != 0)
	{
		nmb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*res;
	long	nmb;

	nmb = n;
	count = count_digits(nmb);
	res = (char *)malloc(count + 1);
	if (!res)
		return (NULL);
	res[count] = '\0';
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
// 	printf("%s\n", ft_itoa(INT_MAX));
// 	printf("%s\n", ft_itoa(INT_MIN));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(-1));
// 	return (0);
// }
