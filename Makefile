# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbelarmi <dbelarmi@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 12:57:24 by dbelarmi          #+#    #+#              #
#    Updated: 2022/11/11 14:24:50 by dbelarmi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_printf.c ft_puts.c ft_puthax.c ft_utils_libft.c

OBJS	= ${SRCS:.c=.o}

CC		= cc
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
