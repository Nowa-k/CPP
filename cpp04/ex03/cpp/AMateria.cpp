/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:53:21 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 11:53:21 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hpp/AMateria.hpp"

AMateria::AMateria() : _type("default")
{
    std::cout << GRN << "Amateria is created" << std::endl;
	return ;
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type; 
    std::cout << GRN << "Amateria is created" << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
	std::cout << GRN << "Copy constructor" << WHT << std::endl;
	*this = copy;
}

AMateria::~AMateria()
{
    std::cout << RED << "Amateria is deleted" << std::endl;
	return ;
}

AMateria	&AMateria::operator=(AMateria const &copy)
{
	if (this == &copy)
		return (*this);
	std::cout << GRN << "AMateria operator =." << WHT << std::endl;
	this->_type = copy._type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}