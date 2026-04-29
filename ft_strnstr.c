/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 03:11:59 by smasatak          #+#    #+#             */
/*   Updated: 2026/04/30 05:44:54 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*big_start;
	const char	*little_start;
	size_t		i;

	big_start = big;
	little_start = little;
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < len)
	{
		while (*big == *little)
		{
			big++;
			little++;
			i++;
			if (*little == '\0')
				return ((char *)big_start);
		}
		little = little_start;
		big++;
		big_start ++;
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	str1[] = "Hello";
// 	const char	str2[] = "el";
// 	const char	str3[] = "";

// 	printf("%s\n", ft_strnstr(str1, str2, 4));
// 	printf("%s\n", ft_strnstr(str1, str3, 4));
// 	printf("%s\n", ft_strnstr(str1, str2, 1));
// 	return (0);
// }
