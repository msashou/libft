/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:27:04 by smasatak          #+#    #+#             */
/*   Updated: 2026/05/09 15:57:44 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const cahr *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return NULL;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	
}