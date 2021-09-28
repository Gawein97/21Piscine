# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inightin <inigtin@student.21-school.ru>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/12 16:00:12 by inightin          #+#    #+#              #
#    Updated: 2021/09/22 16:02:50 by inightin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_putchar.c ft_putstr.c ft_std_atoi.c ft_strlen.c ft_map_valid.c \
	   ft_read_fline.c ft_str_line_len.c ft_argv_parse.c ft_map_parse.c bsq.c \
	   ft_map_to_int.c ft_map_symb_valid.c ft_biggest_square.c ft_create_square.c \
	   ft_stdin.c ft_start_stdin.c ft_stdin_valid.c ft_destroy.c

CCFLAGS = -Wall -Wextra -Werror 

%.o: 	%.c ft.h
		gcc -c ${CCFLAGS} $< -o $@

OBJS = ${SRCS:.c=.o}

RM = rm -f

NAME = bsq

${NAME}:	${OBJS}
			gcc ${CCFLAGS} -o ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
