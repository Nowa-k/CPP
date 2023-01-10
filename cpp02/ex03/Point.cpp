/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:42:36 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/20 16:54:30 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x(), y()
{
	//std::cout << "Default constructor" << std::endl;
	return ;
}

Point::Point ( float const f, float const s) : x(f) , y(s)
{
	//std::cout << "Constructr with float" << std::endl;
	return ;
}

Point::Point( const Point &p ) : x(p.x) , y(p.y)
{
	//std::cout << "Copy costructor" << std::endl;
	return ;
}


Point &Point::operator=( const Point &c )
{
	setX(c.getX());
	setY(c.getY());
	return *this;
}

Point::~Point( void )
{
	//std::cout << "Destructor" << std::endl;
	return ;
}

Fixed Point::getX( void ) const
{
	return(x.getRawBits());	
}

Fixed Point::getY( void ) const
{
	return (y.getRawBits());	
}

void Point::setX( const Fixed &f )
{
	Fixed *ptr = (Fixed *)(&this->x);
	*ptr = f;
}

void Point::setY( const Fixed &f )
{
	Fixed *ptr = (Fixed *)(&this->y);
	*ptr = f;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	bool sign[3];

	sign[0] = ((a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY())) >= 0;
	sign[1] = ((b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY())) >= 0;
	sign[2] = ((c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY())) >= 0;
	if (sign[0] == sign[1] && sign[1] == sign[2])
	{
		std::cout << "TRUE" << std::endl;
		return (true);
	}
	std::cout << "FALSE" << std::endl;
	return (false);
}