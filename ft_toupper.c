/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masatakesasho <masatakesasho@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:25:38 by masatakesas       #+#    #+#             */
/*   Updated: 2026/04/28 16:10:22 by masatakesas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ' ');
	else
		return (c);
}

// #include <stdio.h>

// int	main()
// {
// 	char	c1;
// 	char	c2;

// 	c1 = 'a';
// 	c2 = 'A';
// 	printf("%c\n", ft_toupper(c1));
// 	printf("%c\n", ft_toupper(c2));
// 	return (0);
// }
