/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 12:33:27 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/11 13:29:31 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dst;

	i = 0;
	dst = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	while (i < ft_strlen(s))
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s[] = "";
// 	char	ss[] = "Hi.";
// 	char	*res;

// 	printf("ft_strdup testing...'s'\n");
// 	res = ft_strdup(s);
// 	if (res != NULL)
// 	{
// 		printf("Result:%s\n", res);
// 		free (res);
// 	}
// 	printf("ft_strdup testing...'ss'\n");
// 	res = ft_strdup(ss);
// 	if (res != NULL)
// 	{
// 		printf("Result:%s\n", res);
// 		free (res);
// 	}
// 	return (0);
// }
