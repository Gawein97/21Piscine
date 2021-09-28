# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inightin <inigtin@student.21-school.ru>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/12 16:00:12 by inightin          #+#    #+#              #
#    Updated: 2021/09/19 20:41:51 by inightin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_putchar.c ft_putstr.c ft_std_atoi.c ft_parse_dict.c main.c ft_zero.c \
	   ft_utils.c ft_run.c three_chars.c ft_utils2.c ft_utils3.c input_validator.c

CCFLAGS = -Wall -Wextra -Werror 

%.o: 	%.c
		gcc -c ${CCFLAGS} $< -o $@

OBJS = ${SRCS:.c=.o}

RM = rm -f

NAME = rush-02

${NAME}:	${OBJS}
			gcc ${CCFLAGS} -o ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
