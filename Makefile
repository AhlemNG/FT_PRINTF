# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anouri <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 11:13:06 by anouri            #+#    #+#              #
#    Updated: 2022/12/10 11:30:42 by anouri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libftprintf.a

SRCS= ft_format_set.c ft_putchar.c ft_putnbr_base.c ft_put_pointer.c \
	ft_putstr.c ft_putunsigned_base.c ft_printf.c

INC_DIR= ./

OBJS= ${SRCS:.c=.o}

CC= cc

FLAGS= -Wall -Wextra -Werror

RM= rm -f

AR= ar rcs

all: $(NAME)

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

.c.o:
	${CC} ${FLAGS} -I ${INC_DIR} -c $< -o ${<:.c=.o}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all


.PHONY: all clean fclean re
