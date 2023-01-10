/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:33:28 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 10:33:28 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog ()
{
    _type = "Dog";
    std::cout << GRN << "Dog is created." << std::endl;
}

Dog::Dog( const Dog &d )
{
    std::cout << GRN << "Dog copie constructor." << std::endl;
    *this = d;
}

Dog::~Dog ()
{
    std::cout << RED << "Dog is deleted" << std::endl;
}

Dog &Dog::operator=( const Dog &d)
{
    if (this == &d)
        return (*this);
    std::cout << GRN << "Dog operator =." << std::endl;
    this->_type = d._type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << WHT << "Ouaf Ouaf" << std::endl;
}