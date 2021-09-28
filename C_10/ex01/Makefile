# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inightin <inigtin@student.21-school.ru>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/12 16:00:12 by inightin          #+#    #+#              #
#    Updated: 2021/09/13 20:15:13 by inightin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_putnbr.c  ft_cat.c ft_stdin.c

CCFLAGS = -Wall -Wextra -Werror 

%.o: 	%.c
		gcc -c ${CCFLAGS} $< -o $@

OBJS = ${SRCS:.c=.o}

RM = rm -f

NAME = ft_cat

${NAME}:	${OBJS}
			gcc ${CCFLAGS} -o ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
