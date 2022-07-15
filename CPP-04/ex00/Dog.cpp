# include "Dog.hpp"

Dog::Dog ()
{
    _type = "Dog";
    std::cout << GRN << "Dog is created" << std::endl;
}

Dog::~Dog ()
{
    std::cout << RED << "Dog is deleted" << std::endl;
}

Dog &Dog::operator=( const Dog &c)
{
    this->_type = c._type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << WHT << "Ouaf Ouaf" << std::endl;
}