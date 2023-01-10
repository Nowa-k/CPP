/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:22:46 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 10:22:46 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat ()
{
    _type = "Cat";
    std::cout << GRN << "Cat is created." << std::endl;
}

Cat::Cat ( const Cat &c)
{
    std::cout << GRN << "Cat copie constructor." << WHT << std::endl;
    _type = c._type;
}

Cat::~Cat ()
{
    std::cout << RED << "Cat is deleted." << std::endl;
}

Cat &Cat::operator=( const Cat &c)
{
    if (this ==  &c)
        return (*this);
    std::cout << "Cat operator =." << std::endl;
    this->_type = c._type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << WHT << "Miaouw Miaouw" << std::endl;
}