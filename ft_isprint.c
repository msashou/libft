/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:00:41 by smasatak          #+#    #+#             */
/*   Updated: 2026/04/27 12:23:44 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
	{
		return (1);
	}
	else
		return (0);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("画面にしめすことができるか否かのチェック\n");
// 	printf("Aは%d,\\nは%d\n", ft_isprint('A'), ft_isprint('\n'));
// 	printf("SPは%d\n", ft_isprint(' '));

// 	return (0);
// }
