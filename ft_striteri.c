/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 12:26:05 by smasatak          #+#    #+#             */
/*   Updated: 2026/05/11 13:18:20 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}

// void	tolowerupper(unsigned int i, char *c)
// {
// 	if (i % 2 == 0)
// 	{
// 		if (*c >= 'a' && *c <= 'z')
// 			*c-= 32;
// 	}
// 	else
// 	{
// 		if (*c >= 'A' && *c <= 'Z')
// 			*c += 32;
// 	}
// 	return ;
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Seeing pink elephant";

// 	printf("Before:%s\n", str);
// 	ft_striteri(str, tolowerupper);
// 	printf("After:%s\n", str);

// 	return (0);
// }
