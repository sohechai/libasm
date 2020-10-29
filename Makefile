# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sofiahechaichi <sofiahechaichi@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/27 23:44:37 by sofiahechai       #+#    #+#              #
#    Updated: 2020/10/29 15:39:36 by sofiahechai      ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC			=	ft_strlen.s \
				ft_strcpy.s \

OBJ			=	$(SRC:.s=.o)

NAME		=	libasm.a

HEADER		=	./libasm.h

FLAGS		=	-f elf64

FLAGMAC		=	-f macho64

RM			=	rm -rf

TEST		=	test

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)

%.o: %.s $(HEADER)
	nasm $(FLAGMAC) $< -o $@

$(TEST):
	gcc -Wall -Werror -Wextra main.c libasm.a -o $(TEST)

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME} ${TEST}

re: fclean all
