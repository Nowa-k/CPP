/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:33:20 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 10:33:20 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    _type = "None";
    std::cout << GRN << "Animal is created." << std::endl;
}

Animal::Animal(const Animal &a)
{
    *this = a;
    std::cout << GRN << "Animal copie is created." << std::endl;
}

Animal::~Animal()
{
    std::cout << RED << "Animal is deleted." << std::endl;
}

Animal &Animal::operator= (const Animal &a)
{
    if (this == &a)
        return (*this);
    std::cout << GRN << "Operator =." << std::endl;
    this->_type = a._type;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << WHT << "Zbl Zbl" << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}