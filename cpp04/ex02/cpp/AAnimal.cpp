/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:45:04 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 11:45:04 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hpp/AAnimal.hpp"

AAnimal::AAnimal()
{
    _type = "None";
    std::cout << GRN << "AAnimal is created" << std::endl;
}

AAnimal::AAnimal(const AAnimal &a)
{
    *this = a;
    std::cout << GRN << "Animal copie is created" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << RED << "Animal is deleted" << std::endl;
}

AAnimal &AAnimal::operator= (const AAnimal &a)
{
    std::cout << GRN << "Animal = is created" << std::endl;
    this->_type = a._type;
    return *this;
}

void AAnimal::makeSound() const
{
    std::cout << WHT << "Zbl Zbl" << std::endl;
}

std::string AAnimal::getType() const
{
    return _type;
}