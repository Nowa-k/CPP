NAME = Materia

SRC =	main.cpp \
		MateriaSource.cpp \
		Character.cpp \
		AMateria.cpp \
		Cure.cpp \
		Ice.cpp


CC = g++
FLAGS = -Wall -Wextra -Werror --std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp IMateriaSource.hpp MateriaSource.cpp ICharater.hpp Character.hpp AMateria.hpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all NAME clean fclean re