/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 15:28:39 by smasatak          #+#    #+#             */
/*   Updated: 2026/06/22 15:22:45 by smasatak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	n;

	n = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			n++;
		s++;
	}
	return (n);
}

static char	*extract_word(char const *s, char c)
{
	int		len;
	char	*word;
	int		i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_all(char **res, int count)
{
	while (count > 0)
		free(res[--count]);
	free(res);
}

static int	fill_word(char **res, int i, const char **s, char c)
{
	res[i] = extract_word(*s, c);
	if (!res[i])
	{
		free_all(res, i);
		return (0);
	}
	while (**s && **s != c)
		(*s)++;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!fill_word(res, i++, &s, c))
				return (NULL);
		}
		else
			s++;
	}
	res[i] = NULL;
	return (res);
}

// int	main(void)
// {
// 	char	s[] = "PresenseaRimixafixaKidafresino";
// 	char	c;
// 	char	**res;
// 	int		i;
// 	int		j;

// 	c = 'a';
// 	res = ft_split(s, c);
// 	i = 0;
// 	while (res[i] != NULL)
// 	{
// 		j = 0;
// 		while (res[i][j] != '\0')
// 		{
// 			write(1, &res[i][j], 1);
// 			j++;
// 		}
// 		write(1, "\n", 1);
// 		i++;
// 	}
// }