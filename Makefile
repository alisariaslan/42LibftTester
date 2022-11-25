# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 12:40:05 by msariasl          #+#    #+#              #
#    Updated: 2022/11/25 22:58:07 by msariasl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
DEBUG = gcc main.c $(NAME) && ./a.out
FILES = $(shell find ../. -name "*.c" ! -name "main.c" && find ../. -name "*.h")
OBJ = $(FILES:.c=.o)
RM = rm -f
AR = ar -rc
FLAGS = -Wall -Wextra -Werror

%.o: %.c
	gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
		ar -rc $(NAME) $(OBJ)

clean:
	rm -rf ../*.o
	rm -rf $(NAME)
	rm -rf "a.out"
		
test:
	make clean
	make
	nm $(NAME)
	$(DEBUG)

debug:
	clear
	$(DEBUG)