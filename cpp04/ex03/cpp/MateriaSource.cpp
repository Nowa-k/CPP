/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:54:12 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 11:54:12 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hpp/MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
    std::cout << GRN << "MateriaSource is created" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &m)
{
    std::cout << GRN << "Copy operator" << WHT << std::endl;
    *this= m;
}

MateriaSource::~MateriaSource()
{
    std::cout << RED << "MateriaSource is deleted" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &m)
{
    if (this == &m)
        return (*this);
    std::cout << GRN << "Operator = materia source" << std::endl;
    for (int i = 0; i < 4; i++)
        this->tabMateria[i] = m.tabMateria[i];
    return (*this);
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
    return 0;
}