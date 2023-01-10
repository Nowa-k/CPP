/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:31:19 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/13 15:46:46 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>


Fixed::Fixed()
{
	virgulefixe = 0;
	std::cout << GRN << "Default constructor called" << WHT << std::endl;
	return ; 
}

Fixed::Fixed( const Fixed &f )
{
	std::cout << GRN << "Copy costructeur called" << WHT << std::endl;
	Fixed::operator=( f );
}

Fixed &Fixed::operator= (const Fixed &f)
{
	std::cout << GRN << "Copy assignment operator called" << WHT << std::endl;
	this->virgulefixe = f.getRawBits();
	return (*this);
}

Fixed::~Fixed ()
{
	std::cout << RED << "Destructor called" << WHT << std::endl;
	return ;	
}

int	Fixed::getRawBits ( void ) const
{
	std::cout << "getRawBits member function called" << WHT << std::endl;
	return virgulefixe;
}

void Fixed::setRawBits (int const raw)
{
	virgulefixe = raw;
}
