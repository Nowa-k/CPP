#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    _type = "ice";
    std::cout << GRN << "Objet ice is created" << std::endl;
}

Ice::Ice(std::string type) : AMateria("ice")
{
    _type = type;
    std::cout << GRN << "Objet ice is created" << std::endl;
}

Ice::~Ice()
{
    std::cout << RED << "Object ice is delete"<< std::endl;
}

AMateria *Ice::clone() const
{
    AMateria *a = new Ice();
    return a;
}

void Ice::use(ICharacter &target)
{
    std::cout << WHT << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
