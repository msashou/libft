/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:19:08 by smasatak          #+#    #+#             */
/*   Updated: 2026/04/23 19:07:32 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void* ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t	i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
