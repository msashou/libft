/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masatakesasho <masatakesasho@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 15:28:19 by masatakesas       #+#    #+#             */
/*   Updated: 2026/05/13 15:08:34 by masatakesas      ###   ########.fr       */
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
	while (s1[start] && ft_strchr(&s1[start], set))
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_strchr(&s1[end], set))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}

#include <stdio.h>

int	main()
{
	const char	s1[] = "ParisHello 42Tokyo!!Paris";
	const char	set[] = "Paris";

	printf("Testing ft_strtrim...\n");
	printf("Before:%s\n", s1);
	printf("After:%s\n", ft_strtrim(s1, set));
	return (0);
}
