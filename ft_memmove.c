/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <masatak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:23:26 by smasatak          #+#    #+#             */
/*   Updated: 2026/04/25 15:56:21 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_memmove(void *dest, const coid *src, size_t n)
{
	unsigned char *d = (unsigned char *)dest;
	unsigned char *s = (unsigned char *)src;
	int	i;
	int	v;

	i = 0;
	if (desr > src)
	{
		while (src != '\0)
		{
			d[i] = s[i];
			i--;
		}
	ekse
	{	
		while (src != '\0')
		{
			d[i] = s[i];
			i--;
		}
	}
	return (dest);
}

