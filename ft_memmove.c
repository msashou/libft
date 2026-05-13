/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masatakesasho <masatakesasho@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:23:26 by smasatak          #+#    #+#             */
/*   Updated: 2026/05/13 15:08:27 by masatakesas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_memmove(void *dest, const coid *src, size_t n)
{
	unsigned char *d = (unsigned char *)dest;
	unsigned char *s = (unsigned char *)src;
	int	i;
	int	v;

	i = 0;
	if (dest > src)
	{
		while (src != '\0')
		{
			d[i] = s[i];
			i--;
		}
	}
	else
	{
		while (src != '\0')
		{
			d[i] = s[i];
			i--;
		}
	}
	return (dest);
}
