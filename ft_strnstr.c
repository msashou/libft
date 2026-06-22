/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 03:11:59 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/18 13:40:49 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		b_count;
	size_t		l_count;

	if (!little)
		return (NULL);
	if (!*little)
		return ((char *)big);
	if (!big || len == 0)
		return (NULL);
	b_count = 0;
	while (big[b_count] && b_count < len)
	{
		l_count = 0;
		while (b_count + l_count < len && little[l_count]
			&& big[b_count + l_count] == little[l_count])
		{
			l_count++;
			if (little[l_count] == '\0')
				return ((char *)(big + b_count));
		}
		b_count++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	str1[] = "Hello";
// 	const char	str2[] = "el";
// 	const char	str3[] = "";

// 	printf("%s\n", ft_strnstr(str1, str2, 4));
// 	printf("%s\n", ft_strnstr(str1, str3, 4));
// 	printf("%s\n", ft_strnstr(str1, str2, 0));
// 	printf("%s\n", ft_strnstr(str1, NULL, 2));
// 	printf("%s\n", ft_strnstr(NULL, str2, 2));
// 	return (0);
// }
