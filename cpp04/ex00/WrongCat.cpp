/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:33:42 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 10:33:42 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(), _type("WrongCat")
{
    std::cout << GRN << "WrongCat is created" << WHT << std::endl;
}

WrongCat::WrongCat(const WrongCat &W) : WrongAnimal()
{
    _type = W._type;
    std::cout << GRN << "Copie WrongCat is created" << WHT << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << RED << "WrongCat is delete" << WHT <<std::endl;
}

WrongCat &WrongCat::operator= (const WrongCat &w)
{
    if (this == &w)
        return (*this);
    std::cout << GRN << "WrongCat operator =." << WHT << std::endl;
    this->_type = w._type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << WHT << "WrongMiou" << std::endl;
}
