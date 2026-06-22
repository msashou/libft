/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 22:33:02 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/17 14:39:38 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*s_rt;

	s_rt = NULL;
	while (1)
	{
		if (*s == (const char)c)
			s_rt = s;
		if (*s == '\0')
			break ;
		s++;
	}
	return ((char *)s_rt);
}

// int	main(void)
// {
// 	char	str[] = "Hello.";
// 	printf("%s\n", ft_strchr(str, 357));
// 	printf("%s\n", strchr(str, 357));

// 	printf("%s\n", ft_strchr(str, '\0'));
// 	printf("%s\n", strchr(str, '\0'));

// 	printf("%s\n", ft_strchr(str, 'x'));
// 	printf("%s\n", strchr(str, 'x'));

// 	return (0);
// }
