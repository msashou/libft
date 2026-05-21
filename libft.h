/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masatakesasho <masatakesasho@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 16:54:29 by smasatak          #+#    #+#             */
/*   Updated: 2026/05/20 23:24:03 by masatakesas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

//関数のプロトタイプ宣言
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

t_list	*ft_lstlast(t_list *lst);

size_t ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strchr(const char *s, int c);

#endif // _LIBFT_H_
