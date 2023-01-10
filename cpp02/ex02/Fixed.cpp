/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:31:19 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/21 10:58:11 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*********************************************************************************************/
/********************************* Constructeur **********************************************/
/*********************************************************************************************/

Fixed::Fixed()
{
	setRawBits (0);
}

Fixed::Fixed(int const integer)
{
	setRawBits (integer << partfract);
}

Fixed::Fixed(float const flottant)
{
	value = roundf(flottant * (1 << partfract));
}

Fixed::Fixed( const Fixed &f )
{
	Fixed::operator=( f );
}

Fixed &Fixed::operator= (const Fixed &f)
{
	this->value = f.getRawBits();
	return (*this);
}

/*********************************************************************************************/
/********************************* Destructeur ***********************************************/
/*********************************************************************************************/

Fixed::~Fixed ()
{
	return ;
}

/*********************************************************************************************/
/******************************** Operateur de comparaison ***********************************/
/*********************************************************************************************/

bool Fixed::operator> (const Fixed &f) const
{
	if (value < f.value)
		return (false);
	return (true);
}

bool Fixed::operator< (const Fixed &f) const
{
	if (value > f.value)
		return (false);
	return (true);
}

bool Fixed::operator>= (const Fixed &f) const
{
	if (value <= f.value)
		return (false);
	return (true);
}

bool Fixed::operator<= (const Fixed &f) const
{
	if (value <= f.value)
		return (false);
	return (true);
}

bool Fixed::operator== (const Fixed &f) const
{
	if (value != f.value)
		return (false);
	return (true);
}

bool Fixed::operator!= (const Fixed &f) const
{
	if (value == f.value)
		return (false);
	return (true);
}

/*********************************************************************************************/
/********************************* Operateur arithmetique ************************************/
/*********************************************************************************************/

Fixed Fixed::operator+ (const Fixed &f)
{
	Fixed(res);
	res.value = value + f.value;
	return (res);
}

Fixed Fixed::operator- (const Fixed &f)
{
	Fixed(res);
	res.value = value - f.value;
	return (res);
}

Fixed Fixed::operator* (const Fixed &f)
{
	Fixed res;

	res.value = value * (f.value / (1 << partfract));
	return (res);
}

Fixed Fixed::operator/ (const Fixed &f)
{
	Fixed res;
	if (f.value == 0)
	{
		std::cout << RED << "Div par 0 impossible" << WHT << std::endl;
		res.value = 0;
	}
	else
		res.value = (value * (1 << partfract)) / f.value ;		
	return (res);
}

/*********************************************************************************************/
/**************************** Operateur incre/decre.mentation ********************************/
/*********************************************************************************************/

Fixed Fixed::operator--( void )
{
	return (Fixed(--value));
}

Fixed Fixed::operator--( int )
{
	Fixed f = *this;
	if (value - 1 > 1)
		--*this;
	return (f);
}

Fixed Fixed::operator++( void )
{
	value++;
	return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed f = *this; 
	++*this;
	return (f);
}
/*********************************************************************************************/
/********************************* Operateur d'insertion *************************************/
/*********************************************************************************************/

std::ostream &operator << (std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}

/*********************************************************************************************/
/*************************************** Fonctions *******************************************/
/*********************************************************************************************/

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

Fixed Fixed::min(Fixed &a, Fixed &b)
{
	if (a.value > b.value)
		return (b);
	return (a);
}

Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.value > b.value)
		return (b);
	return (a);
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
	if (a.value > b.value)
		return (a);
	return (b);
}

Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.value > b.value)
		return (a);
	return (b);
}