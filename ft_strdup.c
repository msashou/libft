/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 12:33:27 by smasatak          #+#    #+#             */
/*   Updated: 2026/05/09 14:41:17 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*dest;

	i = 0;
	len = 0;
	while (s[len] != '\0')
		len++;
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
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
