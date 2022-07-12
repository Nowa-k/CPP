#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    _type = "cure";
    std::cout << GRN << "Objet cure is created" << std::endl;
}

Cure::Cure(std::string type) : AMateria("cure")
{
    _type = type;
    std::cout << GRN << "Objet cure is created" << std::endl;
}

Cure::~Cure()
{
    std::cout << RED << "Object cure is delete"<< std::endl;
}

AMateria *Cure::clone() const
{
    AMateria *a = new Cure();
    return a;
}

void Cure::use(ICharacter &target)
{
    std::cout << WHT << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
