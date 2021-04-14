# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojudith <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/01 22:57:13 by ojudith           #+#    #+#              #
#    Updated: 2021/03/02 21:00:45 by ojudith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	BSQ
CC			=	gcc
CC_FLAGS	=	-Wall -Wextra -Werror
H_FLAGS		=	-I
H_DIR		=	./
H_FILES		=	*.h
HEADERS		=	${addprefix ${H_DIR}, ${H_FILES}}
SRCS_DIR	=	./
SRCS_FILES	=	bsq.c \
				map_init.c \
				map_check.c \
				map_get.c \
				map_set.c \
				map_check_data.c \
				map_check_rows.c \
				map_correct.c \
				map_malloc.c \
				map_find_square.c \
				map_print.c \
				map_control.c \
				ft_is_digit.c \
				ft_is_printable.c \
				ft_stpncpy.c \
				map_show.c
SRCS		=	${addprefix ${SRCS_DIR}, ${SRCS_FILES}}
OBJS		=	${SRCS:.c=.o}
RM			=	rm
RM_FLAGS	=	-f

all:			${NAME}

${NAME}:		${OBJS}
				${CC} -o ${NAME} ${OBJS}

clean:
				${RM} ${RM_FLAGS} ${OBJS}

fclean:			clean
				${RM} ${RM_FLAGS} ${NAME}

%.o:			%.c ${HEADERS}
				${CC} ${CC_FLAGS} -c $< -o $@ ${H_FLAGS} ${H_DIR}

.PHONY:			all clean fclean