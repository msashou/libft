# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smasatak <smasatak@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/23 10:43:15 by smasatak          #+#    #+#              #
#    Updated: 2026/06/11 13:29:50 by smasatak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= cc
NAME = libft.a
CFLAGS	= -Wall -Werror -Wextra
SRCS = ft_atoi.c \
	ft_lstmap.c \
	ft_striteri.c \
	ft_bzero.c \
	ft_lstnew.c \
	ft_strjoin.c \
	ft_calloc.c \
	ft_lstsize.c \
	ft_strlcat.c \
	ft_isalnum.c \
	ft_memchr.c \
	ft_strlcpy.c \
	ft_isalpha.c \
	ft_memcmp.c \
	ft_strlen.c \
	ft_isascii.c \
	ft_memcpy.c \
	ft_strmapi.c \
	ft_isdigit.c \
	ft_memmove.c \
	ft_strncmp.c \
	ft_isprint.c \
	ft_memset.c \
	ft_strnstr.c \
	ft_itoa.c \
	ft_putchar_fd.c \
	ft_strrchr.c \
	ft_lstadd_back.c \
	ft_putendl_fd.c \
	ft_strtrim.c \
	ft_lstadd_front.c \
	ft_putnbr_fd.c \
	ft_substr.c \
	ft_lstclear.c \
	ft_putstr_fd.c \
	ft_tolower.c \
	ft_lstdelone.c \
	ft_split.c \
	ft_toupper.c \
	ft_lstiter.c \
	ft_strchr.c \
	ft_lstlast.c \
	ft_strdup.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
