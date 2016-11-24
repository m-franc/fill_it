# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfranc <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/24 16:24:51 by mfranc            #+#    #+#              #
#    Updated: 2016/11/24 17:17:02 by mfranc           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Wextra -Werror

LIB = -lft

SRC = ft_get_number_tminos.c	\
	  main.c

OBJ = $(SRCS:.c=.o )

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(FLAGS) $(SRC) -L. $(LIB)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all
