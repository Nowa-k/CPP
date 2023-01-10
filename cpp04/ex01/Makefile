NAME = Brain

SRC =	cpp/main.cpp \
		cpp/Animal.cpp \
		cpp/Cat.cpp \
		cpp/Dog.cpp \
		cpp/WrongAnimal.cpp \
		cpp/WrongCat.cpp \
		cpp/Brain.cpp

HEADER = hpp/Animal.hpp hpp/Dog.hpp hpp/Cat.hpp hpp/Brain.cpp hpp/WrongAnimal.cpp hpp/WrongCat.cpp

CC = c++
FLAGS = -Wall -Wextra -Werror --std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all NAME clean fclean re