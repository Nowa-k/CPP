# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aleferra < aleferra@student.42lyon.fr >    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 13:22:50 by aleferra          #+#    #+#              #
#    Updated: 2022/07/19 12:53:24 by aleferra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

SRC =	Account.cpp \
		tests.cpp

CC = g++
FLAGS = -Wall -Wextra -Werror --std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp Account.hpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all NAME clean fclean re