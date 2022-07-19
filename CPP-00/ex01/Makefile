# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aleferra < aleferra@student.42lyon.fr >    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 10:42:43 by aleferra          #+#    #+#              #
#    Updated: 2022/07/19 11:50:07 by aleferra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = contact

SRC =	Contact.cpp \
		Phonebook.cpp \
		main.cpp
CC = g++
FLAGS = -Wall -Wextra -Werror --std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp Contact.hpp Phonebook.hpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all NAME clean fclean re