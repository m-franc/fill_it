# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfranc <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/24 16:24:51 by mfranc            #+#    #+#              #
#    Updated: 2016/11/26 14:57:49 by mfranc           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Wextra -Werror

LIB = -lft

SRC = ft_get_file.c			\
	  main.c				\
	  ft_check_file.c		\
	  ft_get_map.c			\
	  ft_check_map.c		\
	  ft_exit.c				\

OBJ = $(SRCS:.c=.o )

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(FLAGS) $(SRC) -L. $(LIB)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
