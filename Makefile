# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 12:40:05 by msariasl          #+#    #+#              #
#    Updated: 2022/11/26 13:24:41 by msariasl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
DEBUG = gcc main.c $(NAME) && ./a.out
DEBUG_B = gcc bonus.c $(NAME) && ./a.out
FILES = $(shell find ../. -name "*.c" ! -name "main.c" ! -name "bonus.c" && find ../. -name "*.h")
OBJ = $(FILES:.c=.o)
RM = rm -f
AR = ar -rc
FLAGS = -Wall -Wextra -Werror

%.o: %.c
	gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
		ar -rc $(NAME) $(OBJ)

clean:
	clear
	@rm -rf ../*.o
	@rm -rf $(NAME)
	@rm -rf "a.out"
	@rm -rf *.txt
	@echo Temizlendi.

show:
	clear
	nm $(NAME)
	@echo Bütün arşiv dosyaları getirildi.

mando:
	@echo Zorunlu kısım için test çalıştırılıyor...
	@make
	$(DEBUG)

bonus:
	@echo Bonus kısım için test çalıştırılıyor...
	@make
	@$(DEBUG_B)
	
test:
	@make mando
	@make bonus

d:
	clear
	$(DEBUG)

b:
	clear
	$(DEBUG_B)
