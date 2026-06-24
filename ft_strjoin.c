/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 13:48:51 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/11 13:29:34 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	char	*dst;

	if (!s1 || !s2)
		return (NULL);
	res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	dst = res;
	while (*s1)
	{
		*dst = *s1;
		dst++;
		s1++;
	}
	while (*s2)
	{
		*dst = *s2;
		dst++;
		s2++;
	}
	*dst = '\0';
	return (res);
}

// int	main(void)
// {
// 	const char	str1[] = "Hello";
// 	const char	str2[] = "42Tokyo";

// 	printf("str1:%s, str2:%s\n", str1, str2);

// 	char *result = ft_strjoin(str1, str2);
// 	if (result)
// 	{
// 		printf("Result: %s\n", result);
// 		free (result);
// 	}
// 	return (0);
// }
