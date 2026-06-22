/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:27:04 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/22 15:01:46 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	actual_len;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	actual_len = s_len - start;
	if (actual_len > len)
		actual_len = len;
	substr = (char *)malloc(sizeof(char) * (actual_len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, actual_len + 1);
	return (substr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s\n", ft_substr("Hello, 42Tokyo", 5, 8));
// 	return (0);
// }
