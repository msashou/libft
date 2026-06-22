/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 16:08:16 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/22 19:00:30 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int	n)
{
	return (n == ' ' || (n > 8 && n <= 13));
}

int	ft_atoi(const char *nptr)
{
	long	res;
	long	next;
	int		negative;

	res = 0;
	negative = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			negative = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		next = res * 10 + (*nptr - '0');
		if (negative == 1 && next > INT_MAX)
			return ((int)INT_MAX);
		if (negative == -1 && next > (long)INT_MAX + 1)
			return ((int)INT_MIN);
		res = next;
		nptr++;
	}
	return ((int)(res * negative));
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
// 	printf("%d\n", ft_atoi("-2000000000"));
// 	return (0);
// }
