/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:46:21 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 11:46:21 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hpp/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(), _type("WrongCat")
{
    std::cout << GRN << "WrongCat is created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &W) : WrongAnimal()
{
    _type = W._type;
    std::cout << GRN << "Copie WrongCat is created" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << RED << "WrongCat is delete" << std::endl;
}

WrongCat &WrongCat::operator= (const WrongCat &w)
{
    this->_type = w._type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << WHT << "WrongMiou" << std::endl;
}
