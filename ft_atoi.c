/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 16:08:16 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/18 17:09:43 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	res;
	long	next;
	int		negative;

	res = 0;
	negative = 1;
	while (*nptr == ' ' || (*nptr > 8 && *nptr <= 12))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			negative = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		next = res * 10 + (*nptr - '0') * negative;
		if (negative == 1 && next < res)
			return ((int)LONG_MAX);
		if (negative == -1 && next > res)
			return ((int)LONG_MIN);
		res = next;
		nptr++;
	}
	return ((int)res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", atoi("   "));
// 	printf("%d\n", atoi(" --42"));
// 	printf("%d\n", atoi(" +123a45"));
// 	printf("%d\n", atoi("000007"));
// 	printf("%d\n", atoi("2147483647"));
// 	printf("%d\n", atoi("-2147483648"));
// 	printf("%d\n", atoi("2147483648"));
// 	printf("%d\n", atoi("-2147483649"));
// 	printf("%d\n", atoi("999999999999999999999"));

// 	printf("%d\n", ft_atoi("   "));
// 	printf("%d\n", ft_atoi(" --42"));
// 	printf("%d\n", ft_atoi(" +123a45"));
// 	printf("%d\n", ft_atoi("000007"));
// 	printf("%d\n", ft_atoi("2147483647"));
// 	printf("%d\n", ft_atoi("-2147483648"));
// 	printf("%d\n", ft_atoi("2147483648"));
// 	printf("%d\n", ft_atoi("-2147483649"));
// 	printf("%d\n", ft_atoi("999999999999999999999"));
// 	return (0);
// }
