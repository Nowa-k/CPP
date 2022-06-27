# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/23 11:33:59 by aleferra          #+#    #+#              #
#    Updated: 2022/06/27 13:02:49 by aleferra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

SRC =	main.cpp \
		ClapTrap.cpp

CC = g++
FLAGS = -Wall -Wextra -Werror --std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp ClapTrap.hpp 
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all NAME clean fclean re