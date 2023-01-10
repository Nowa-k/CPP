NAME = Materia

SRC =	cpp/main.cpp \
		cpp/MateriaSource.cpp \
		cpp/Character.cpp \
		cpp/AMateria.cpp \
		cpp/Cure.cpp \
		cpp/Ice.cpp


CC = c++
HEADER = hpp/IMateriaSource.hpp hpp/MateriaSource.cpp hpp/ICharater.hpp hpp/Character.hpp hpp/AMateria.hpp hpp/Color.hpp
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