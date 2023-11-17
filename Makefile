# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tauer <tauer@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 14:50:30 by tauer             #+#    #+#              #
#    Updated: 2023/11/15 16:36:33 by tauer            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES	= ft_printf.c\
		print_functions.c\
		print_functions2.c\
		utils.c\

OBJECTS	= ${FILES:.c=.o}

AR		= ar rcs
RM	 	= rm -f
CC		= cc
CFLAGS = -Wall -Wextra -Werror

all:	${NAME}

.c.o:
		${CC} ${CFLAGS} -c -I ./ $< -o ${<:.c=.o}

${NAME}:	${OBJECTS}
			${AR} ${NAME} ${OBJECTS}

clean:
			${RM} ${OBJECTS} ${BONUSOBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all bonus clean fclean re