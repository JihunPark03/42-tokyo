# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 22:07:40 by jihpark           #+#    #+#              #
#    Updated: 2024/09/25 22:16:43 by jihpark          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CC = gcc -Wall -Wextra -Werror
SRCS = ./srcs/ft_print_words.c			\
	   ./srcs/ft_putchar.c				\
	   ./srcs/ft_putstr.c				\
	   ./srcs/ft_read.c					\
	   ./srcs/main.c					\
	   ./srcs/a.c						\
	   ./srcs/get_params.c				\
	   ./srcs/ft_atoi.c					\
	   ./srcs/d.c						\
	   ./srcs/ft_file.c
HEADERS = ./includes
OBJ = ./ft_print_words.o			\
	   ./ft_putchar.o				\
	   ./ft_putstr.o				\
	   ./ft_read.o					\
	   ./main.o						\
	   ./a.o						\
	   ./get_params.o				\
	   ./ft_atoi.o					\
	   ./d.o						\
	   ./ft_file.o

all: objs
	$(CC) -o $(NAME) $(OBJ) -I $(HEADERS)

objs:
	$(CC) -c $(SRCS) -I $(HEADERS)
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
