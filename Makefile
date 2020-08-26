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

SRCS    = 	ft_strlen.s

OBJS    =	${SRCS:.s=.o}

CFLAGS  =	-Wall -Wextra -Werror

${NAME}: ${OBJS}
		ar rc ${NAME} ${OBJS}

all: ${NAME}

.s.o:
	@nasm -f macho64 -s $< -o ${<:.s=.o}
	@gcc ${CFLAGS} -s $< -o ${<:.s=.o}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME} 

re: fclean all

.PHONY: all clean fclean re
