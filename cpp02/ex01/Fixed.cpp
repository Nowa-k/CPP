/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:31:19 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/23 14:15:43 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << GRN << "Default constructor called" << WHT << std::endl;
	setRawBits (0);
}

Fixed::Fixed(int const integer)
{
	std::cout << GRN << "Int constructor called" << WHT << std::endl;
	setRawBits (integer << partfract);
}

Fixed::Fixed(float const flottant)
{
	std::cout << GRN << "Float constructor called" << WHT << std::endl;
	value = roundf(flottant * (1 << partfract));
}

Fixed::Fixed( const Fixed &f )
{
	std::cout << GRN << "Copy costructeur called" << WHT << std::endl;
	Fixed::operator=( f );
}

Fixed::~Fixed ()
{
	std::cout << RED << "Destructor called" << WHT << std::endl;
}

Fixed &Fixed::operator= (const Fixed &f)
{
	std::cout << GRN << "Copy assignment operator called" << WHT << std::endl;
	this->value = f.getRawBits();
	return (*this);
}

std::ostream &operator << (std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}

int	Fixed::getRawBits ( void ) const
{
	return value;
}

void Fixed::setRawBits (int const raw)
{
	value = raw;
}

float Fixed::toFloat ( void ) const
{
	return ((float)value / (float)(1 << partfract));
}

int Fixed::toInt ( void ) const
{
	return (value >> 8); 
}