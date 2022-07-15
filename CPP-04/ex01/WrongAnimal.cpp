#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("None")
{
    std::cout << GRN << "WrongAnimal is created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << RED << "WrongAnimal is deleted" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
    _type = a._type;
    std::cout << GRN << "Copie WrongAnimal is created" << std::endl;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &a)
{
    *this = a;
    return *this;
}

void    WrongAnimal::makeSound() const
{
    std::cout << WHT << "Wrong animal say WouafMiaou." << std::endl;
}

std::string WrongAnimal::getType() const
{
    return _type;
}

