/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 05:46:17 by smasatak          #+#    #+#             */
/*   Updated: 2026/05/05 21:26:31 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	negative;

	i = 0;
	res = 0;
	negative = 1;
	while (nptr[i] == '\a' || nptr[i] == '\b' || nptr[i] == '\t'
		|| nptr[i] == '\n' || nptr[i] == '\v' || nptr[i] == '\f'
		|| nptr[i] == '\r')
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		negative = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - 48);
		i++;
	}
	return (res * negative);
}

// int	main(void)
// {
// 	const char	nptr[] = "    -123456789";

// 	printf("%d\n", ft_atoi(&nptr[0]));
// 	return (0);
// }
