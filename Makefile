# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfranc <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/24 16:24:51 by mfranc            #+#    #+#              #
#    Updated: 2016/12/08 21:46:56 by mfranc           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Wextra -Werror

CC = gcc $(FLAGS)

SRC = ft_get_file.c				\
	  main.c					\
	  ft_check_file.c			\
	  ft_get_map.c				\
	  ft_check_map.c			\
	  ft_exit.c					\
	  ft_check.c				\
	  ft_check_tminos.c			\
	  ft_check_tminos_1_5.c		\
	  ft_check_tminos_6_10.c	\
      ft_check_tminos_11_15.c	\
	  ft_check_tminos_16_19.c	\
	  backtrack.c				\
  	  ft_setsizetab.c			\
	  ft_can_write_1_3_19.c		\
	  ft_can_write_4_8.c		\
	  ft_can_write_9_13.c		\
	  ft_can_write_14_18.c		\
  	  ft_delete_1_3_19.c		\
  	  ft_delete_4_8.c			\
  	  ft_delete_9_13.c			\
	  ft_delete_14_18.c			\
	  algo_backtrack.c			\
	  ft_putstr.c				\
	  ft_putendl.c				\
	  ft_puttab.c				\
	  ft_strlen.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
