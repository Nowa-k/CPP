#include "Character.hpp"

Character::Character()
{
    _name = "Default";
    std::cout << GRN << "Character is created" << std::endl;
}

Character::Character(std::string name)
{
    _name = name;
    std::cout << GRN << "Character is created" << std::endl;
}

Character::~Character()
{
    for (int index = 0; index < 4; index++)
    {
        if (equipement[index])
            delete equipement[index];
    }
    std::cout << RED << "Character is delete" << std::endl;
}

std::string const &Character::getName() const
{
    return _name;
}

void Character::equip(AMateria *A)
{
    int i;
    for(i = 0; i < 4 && equipement[i] != 0; i++)
        ;
    if (i < 4)
        equipement[i] = A;
}

void Character::unequip(int index)
{
    if (index < 0 || index >= 4)
        return ;
    equipement[index] = 0;
}

void Character::use(int index, ICharacter &target)
{
    if (index < 0 || index >= 4)
        std::cout << WHT << "No materia in this place" << std::endl;
    if (equipement[index] != 0)
        equipement[index]->use(target);
}