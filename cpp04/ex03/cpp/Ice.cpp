/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:53:53 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 11:53:53 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hpp/Ice.hpp"

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

Ice::Ice(const Ice &i)
{
    std::cout << GRN << "CopY constructor Ice" << WHT << std::endl;
    *this = i;
}

Ice::~Ice()
{
    std::cout << RED << "Object ice is delete"<< std::endl;
}

Ice &Ice::operator=(const Ice &c)
{
    if (this == &c)
        return (*this);
    std::cout << GRN << "Ice operator =" << WHT << std::endl;
    this->_type = c._type;
    return (*this);
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
