# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frosa-ma <frosa-ma@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/16 14:02:31 by frosa-ma          #+#    #+#              #
#    Updated: 2022/06/22 15:06:29 by frosa-ma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY	= all clean fclean re bonus

NAME	= libftprintf.a

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
INC		= -I. -I..

LIB		= ../libft.a
SRCS	= \
	ft_printf.c \
	ft_printf_utils.c \
	dot_disp.c \
	dot_wr.c \
	dot.c \
	minus_disp.c \
	minus_wr.c \
	minus.c \
	space_disp.c \
	space_wr.c \
	space.c \
	zero_disp.c \
	zero_wr.c \
	zero.c \
	sharp.c \
	plus.c

OBJS	= ${SRCS:%.c=%.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar -rcs $@ $^

${OBJS}: | ${LIB}

.c.o:
	${CC} ${CFLAGS} ${INC} -c $< -o ${<:%.c=%.o}

${LIB}:
	${MAKE} -C libft/

bonus: all

clean:
	rm -rf *.o

fclean: clean
	rm -rf ${NAME}

re: fclean all
