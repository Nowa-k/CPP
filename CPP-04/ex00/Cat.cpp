# include "Cat.hpp"

Cat::Cat ()
{
    _type = "Cat";
    std::cout << GRN << "Cat is created" << std::endl;
}

Cat::~Cat ()
{
    std::cout << RED << "Cat is deleted" << std::endl;
}

Cat &Cat::operator=( const Cat &c)
{
    std::cout << "test" << std::endl;
    this->_type = c._type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << WHT << "Miaouw Miaouw" << std::endl;
}