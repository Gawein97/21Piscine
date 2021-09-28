# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inightin <inigtin@student.21-school.ru>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/12 16:00:12 by inightin          #+#    #+#              #
#    Updated: 2021/09/12 17:46:14 by inightin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
INCLUDES = /includes/

CCFLAGS = -Wall -Wextra -Werror -I.${INCLUDES}

%.o: 	%.c
		gcc -c ${CCFLAGS} $< -o $@

OBJS = ${SRCS:.c=.o}

RM = rm -f

NAME = libft.a

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
