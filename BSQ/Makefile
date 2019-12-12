# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/11 22:16:15 by gde-matt          #+#    #+#              #
#    Updated: 2019/12/11 22:18:56 by gde-matt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= bsq

C_SOURCE	= bsq_solution.c clean_variables.c ft.c main.c matrix_reading.c

H_SOURCE	= bsq_solution.h clean_variables.h ft.h global.h matrix_reading.h

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
