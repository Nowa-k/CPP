#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << GRN << "MateriaSource is created" << std::endl;
}

MateriaSource::~MateriaSource()
{
    std::cout << RED << "MateriaSource is deleted" << std::endl;
}

void MateriaSource::learnMateria(AMateria *a)
{
    int index;

    for (index = 0; index < 4 && tabMateria[index]; index++)
        ;
    if (index < 4)
        tabMateria[index] = a->clone();
    delete a;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int index = 0; index < 4 && tabMateria[index]; index++)
    {
        if (tabMateria[index]->getType() == type)
        {
            if (type == "cure")
            {
                AMateria *res = new Cure();
                return res;
            }
            else if (type == "ice")
            {
                AMateria *res = new Ice();
                return res;
            }
            else
                return 0;
        }
    }
    return 0;
}