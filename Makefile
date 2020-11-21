# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sofiahechaichi <sofiahechaichi@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/27 23:44:37 by sofiahechai       #+#    #+#              #
#    Updated: 2020/11/21 16:11:39 by sofiahechai      ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC			=	ft_strlen.s \
				ft_strcpy.s \
				ft_strcmp.s \
				ft_write.s	\
				ft_read.s	\
				ft_strdup.s

OBJ			=	$(SRC:.s=.o)

NAME		=	libasm.a

HEADER		=	./libasm.h

FLAGS		=	-f elf64

FLAGSMAC		=	-f macho64

RM			=	rm -rf

TEST		=	test

all: $(NAME) $(TEST)

$(NAME): $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)

%.o: %.s $(HEADER)
	nasm $(FLAGSMAC) $< -o $@

$(TEST):
	clang -Wall -Werror -Wextra -o $(TEST) main.c libasm.a

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME} ${TEST}

re: fclean all
