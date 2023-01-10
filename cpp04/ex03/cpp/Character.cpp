/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:53:39 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 11:53:39 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hpp/Character.hpp"

Character::Character()
{
    _name = "Default";
    for (int i = 0; i < 4; i++)
    {
        _unequipemat[i] = 0;
        equipement[i] = 0;
    }
    std::cout << GRN << "Character is created" << std::endl;
}

Character::Character(std::string name)
{
    _name = name;
    for (int i = 0; i < 4; i++)
    {
        _unequipemat[i] = 0;
        equipement[i] = 0;
    }
    std::cout << GRN << "Character name is created" << std::endl;
}

Character::Character( const Character &c)
{
    std::cout << GRN << "Copie constructor" << WHT;
    *this = c;
}

Character &Character::operator=( const Character &c)
{
    if (this == &c)
        return (*this);
    std::cout << GRN <<  "Chara Operator =" << WHT << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (c.equipement[i])
            this->equipement[i] = c.equipement[i]->clone();
        if (!c._unequipemat[i])
            this->_unequipemat[i] = c._unequipemat[i];
    }
    return (*this);
}

Character::~Character()
{
    std::cout << RED << "Character is delete" << std::endl;

    for (int index = 0; index < 4; index++)
    {
        if (equipement[index])
            delete equipement[index];
        if (_unequipemat[index])
            delete _unequipemat[index];
    }
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
    else
        delete A;
}

void Character::unequip(int index)
{
    int i;
    if (index < 0 || index >= 4)
        return ;
    for (i = 0; i < 4 && _unequipemat[i]; i++)
        ;
    _unequipemat[i] = equipement[index];
    equipement[index] = 0;
}

void Character::use(int index, ICharacter &target)
{
    if (index < 0 || index >= 4)
        std::cout << WHT << "No materia in this place" << std::endl;
    else if (equipement[index] != 0)
        equipement[index]->use(target);
    else 
        std::cout << WHT << "No weapon." << std::endl;
}