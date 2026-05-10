/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 17:27:18 by smasatak          #+#    #+#             */
/*   Updated: 2026/05/10 17:51:52 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	return ;
}

// int	main(void)
// {
// 	ft_putstr_fd("Please your meat^^", 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putstr_fd(NULL, 1);
// 	ft_putstr_fd("", 1);
// 	ft_putstr_fd("Error message test\n", 2);

// 	return (0);
// }
