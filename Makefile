# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frosa-ma <frosa-ma@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 17:12:17 by frosa-ma          #+#    #+#              #
#    Updated: 2022/04/09 16:30:12 by frosa-ma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY = all clean fclean re

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

# Source files: 23
SRCS = \
ft_atoi.c\
ft_bzero.c\
ft_calloc.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_memchr.c\
ft_memcmp.c\
ft_memcpy.c\
ft_memmove.c\
ft_memset.c\
ft_strchr.c\
ft_strdup.c\
ft_strlcat.c\
ft_strlcpy.c\
ft_strlen.c\
ft_strncmp.c\
ft_strnstr.c\
ft_strrchr.c\
ft_tolower.c\
ft_toupper.c\

# Tudo na mesma pasta
OBJS = ${SRCS:%.c=%.o}

all: ${NAME}

${NAME}: ${OBJS}
	@ar -rc $@ $^

a: ${NAME} clean # dont forget to remove <bsd>
	@${CC} ${CFLAGS} tests/main.c -L. -lft -lbsd -o $@

%.o: %.c
	@${CC} -c $< -o $@

clean:
	@rm -f ${OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all
