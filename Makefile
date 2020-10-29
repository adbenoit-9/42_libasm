# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/26 16:04:57 by adbenoit          #+#    #+#              #
#    Updated: 2020/10/29 15:39:46 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    	=	libasm.a

SRCS_PATH	=	srcs/

SRCS    	= 	ft_strlen.s	ft_strcpy.s \
				ft_strcmp.s	ft_write.s \
				ft_read.s	ft_strdup.s

OBJS_NAME    	=	$(SRCS:.s=.o)

OBJS			=	$(addprefix $(SRCS_PATH),$(OBJS_NAME))

CFLAGS  	=	-Wall -Wextra -Werror

all: $(NAME)

.s.o:
	@nasm -f elf64 -s $< -o $(<:.s=.o)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "Creation of \033[33;1m$(NAME)\033[0;1m: [\033[1;32mOK\033[0;1m]"
	
run: $(NAME)
	@gcc -no-pie $(CFLAGS) main.c -L ./ -lasm -o exe
	@echo "Compilation of \033[33;1mLibasm\033[0;1m: [\033[1;32mOK\033[0;1m]"
	@./exe

clean:
	@$(RM) $(OBJS)
	@echo "\033[33;1mLibasm\033[0;1m: objects deleted\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@$(RM) exe
	@echo "\033[33;1mLibasm\033[0;1m: $(NAME) deleted\033[0m"
	@echo "\033[33;1mLibasm\033[0;1m: exe deleted\033[0m"

re: fclean all

debug:
	@echo SRCS = $(SRCS)
	@echo OBJS = $(OBJS)

.PHONY: all clean fclean re run debug
