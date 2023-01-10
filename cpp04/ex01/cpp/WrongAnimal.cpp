/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:48:37 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 10:48:37 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hpp/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("None")
{
    std::cout << GRN << "WrongAnimal is created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << RED << "WrongAnimal is deleted" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
    *this = a;
    std::cout << GRN << "Copie WrongAnimal is created" << std::endl;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &a)
{
    if (this == &a)
        return (*this);
    std::cout << GRN << "WrongAnimal operator =." << WHT << std::endl;
    _type = a._type;
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

