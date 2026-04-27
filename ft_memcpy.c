/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <masatak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:53:31 by smasatak          #+#    #+#             */
/*   Updated: 2026/04/25 15:14:01 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;
	unsigned char *d = (unsigned char*)dest;
	const unsigned char *s = (const unsigned char*)src;
	
	i = 0;
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
