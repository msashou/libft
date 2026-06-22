/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 20:09:29 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/11 13:29:37 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	i = 0;
	if (!s || !f)
		return (NULL);
	res = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// char	to_upper_lower(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 	{
// 		if (c >= 'a' && c <= 'z')
// 			return (c - 32);
// 	}
// 	else
// 	{
// 		if (c >= 'A' && c <= 'Z')
// 			return (c + 32);
// 	}
// 	return (c);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str = "HeLlO sTrMaPi";
// 	char	*res;

// 	res = ft_strmapi(str, to_upper_lower);
// 	printf("Input:%s\n", str);
// 	printf("Output:%s\n", res);
// 	free (res);

// 	if (ft_strmapi(NULL, to_upper_lower) == NULL)
// 		printf("NULL Guard (s) OK\n");
// 	return (0);
// }