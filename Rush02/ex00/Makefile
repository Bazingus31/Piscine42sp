# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/08 20:48:24 by gde-matt          #+#    #+#              #
#    Updated: 2019/12/08 20:48:30 by gde-matt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= rush-02

C_SOURCE	= find_break.c ft.c main.c print_blocks.c

H_SOURCE	= find_break.h ft.h print_blocks.h

OBJS		= ${C_SOURCE:.c=.o}

CC			= cc

CC_FLAGS	= -Wall -Wextra -Werror

RM			= rm -f

all:		$(NAME)

.c.o:
			${CC} ${CC_FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

clean:  
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
