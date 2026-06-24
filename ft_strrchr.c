/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 22:33:02 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/24 06:26:32 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_rt;

	s_rt = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			s_rt = (char *)s;
		s++;
	}
	if (*s == (char)c)
		s_rt = (char *)s;
	return (s_rt);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hello.";
// 	printf("%s\n", ft_strrchr(str, 'l'));
// 	printf("%s\n", strrchr(str, 'l'));

// 	printf("%s\n", ft_strrchr(str, '\0'));
// 	printf("%s\n", strrchr(str, '\0'));

// 	printf("%s\n", ft_strrchr(str, 'x'));
// 	printf("%s\n", strrchr(str, 'x'));

// 	return (0);
// }
