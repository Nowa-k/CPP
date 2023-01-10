/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:53:47 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 11:53:47 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hpp/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    _type = "cure";
    std::cout << GRN << "Objet cure is created" << WHT <<std::endl;
}

Cure::Cure(std::string type) : AMateria("cure")
{
    _type = type;
    std::cout << GRN << "Objet cure is created" << WHT << std::endl;
}

Cure::Cure( const Cure &c )
{
    *this = c;
    std::cout << GRN << "Cure copy constructor" << WHT << std::endl;
}

Cure::~Cure()
{
    std::cout << RED << "Object cure is delete"<< std::endl;
}

Cure &Cure::operator=( const Cure & c)
{
    if (this == &c)
        return (*this);
    std::cout << GRN << "Cure operator =" << std::endl;
    this->_type = c._type;
    return *this;
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
