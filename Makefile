# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfranc <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/24 16:24:51 by mfranc            #+#    #+#              #
#    Updated: 2016/11/25 20:24:15 by mfranc           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Wextra -Werror

LIB = -lft

SRC = ft_get_map.c			\
	  main.c				\
	  ft_check_map.c		\
	  ft_exit.c				\
	  ft_number_tminos.c	\

OBJ = $(SRCS:.c=.o )

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(FLAGS) $(SRC) -L. $(LIB)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all