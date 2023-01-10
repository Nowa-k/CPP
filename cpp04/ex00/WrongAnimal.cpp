/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:33:37 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 10:33:37 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("None")
{
    std::cout << GRN << "WrongAnimal is created." << WHT << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << RED << "WrongAnimal is deleted." << WHT << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
    *this = a;
    std::cout << GRN << "Copie WrongAnimal is created" << WHT << std::endl;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &a)
{
    if (this == &a)
        return (*this);
    std::cout << GRN << "Wrong animal operator =." << WHT << std::endl;  
    this->_type = a._type;
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