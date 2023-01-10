NAME = DiffForm

SRC =	main.cpp \
		cpp/Bureaucrat.cpp \
		cpp/AForm.cpp \
		cpp/ShrubberyCreationForm.cpp \
		cpp/RobotomyRequestForm.cpp \
		cpp/PresidentialPardonForm.cpp \

CC = c++
FLAGS = -Wall -Wextra -Werror --std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp hpp/Bureaucrat.hpp hpp/AForm.hpp hpp/ShrubberyCreationForm.hpp hpp/RobotomyRequestForm.hpp hpp/PresidentialPardonForm.hpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all NAME clean fclean re