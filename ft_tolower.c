/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masatakesasho <masatakesasho@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:12:56 by masatakesas       #+#    #+#             */
/*   Updated: 2026/04/28 16:20:16 by masatakesas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ' ');
	else
		return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c1;
// 	char	c2;

// 	c1 = 'A';
// 	c2 = 'a';
// 	printf("%c\n", ft_tolower(c1));
// 	printf("%c\n", ft_tolower(c2));
// 	return (0);
// }
