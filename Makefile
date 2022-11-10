# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbelarmi <dbelarmi@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 12:57:24 by dbelarmi          #+#    #+#              #
#    Updated: 2022/11/10 13:53:26 by dbelarmi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_printf.c ft_puts.c 

OBJS	= ${SRCS:.c=.o}

CC		= clang
RM		= rm -rf

CFLAGS	= -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}
	
fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all fclean 	clean re
