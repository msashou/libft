/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:52:34 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/22 15:52:35 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}

// #include <stdio.h>

// int	main()
// {
// 	const char	s1[] = "ParisHello 42Tokyo!!Paris";
// 	const char	set[] = "Paris";

// 	printf("Testing ft_strtrim...\n");
// 	printf("Before:%s\n", s1);
// 	printf("After:%s\n", ft_strtrim(s1, set));
// 	return (0);
// }
