# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/26 16:04:57 by adbenoit          #+#    #+#              #
#    Updated: 2020/08/26 16:30:55 by adbenoit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    =	libasm.a

SRCS    = 	ft_strlen.s	ft_strcpy.s \
			ft_strcmp.s

OBJS    =	${SRCS:.s=.o}

CFLAGS  =	-Wall -Wextra -Werror

all: ${NAME}

.s.o:
	@nasm -f elf64 -s $< -o ${<:.s=.o}

${NAME}: ${OBJS}
	@ar rcs ${NAME} ${OBJS}
	@ranlib ${NAME}
	
run: ${NAME}
	@gcc ${CFLAGS} main.c -L ./ -lasm -o exe

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}
	@$(RM) exe

re: fclean all

debug:
	@echo SRCS = ${SRCS}
	@echo OBJS = ${OBJS}

.PHONY: all clean fclean re run debug
