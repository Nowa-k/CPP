NAME = Form

SRC =	main.cpp \
		Bureaucrat.cpp \
		Form.cpp

CC = g++
FLAGS = -Wall -Wextra -Werror --std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp Bureaucrat.hpp Form.hpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all NAME clean fclean re