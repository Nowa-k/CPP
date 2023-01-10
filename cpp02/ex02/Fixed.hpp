/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:32:33 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/23 16:30:10 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define WHT "\e[0;37m"
#include <iostream>
#include <cmath>


class Fixed {

public :
	Fixed();
	Fixed(int integer);
	Fixed(float flottant);
	Fixed &operator= (const Fixed &);          
	Fixed ( const Fixed &f);
	~Fixed();

	//operateur de comparaison
	bool operator>(const Fixed &) const;
	bool operator<(const Fixed &) const;
	bool operator>=(const Fixed &) const;
	bool operator<=(const Fixed &) const;
	bool operator==(const Fixed &) const;
	bool operator!=(const Fixed &) const;

	//operateur arithmetique
	Fixed operator+ (const Fixed &f);
	Fixed operator- (const Fixed &f);
	Fixed operator* (const Fixed &f);
	Fixed operator/ (const Fixed &f);

	//operateur incre/decre.mentation
	Fixed operator--( void );
	Fixed operator--( int );
	Fixed operator++( void );
	Fixed operator++( int );

	//fonctions
	int getRawBits ( void ) const;
	void setRawBits ( int const raw );
	float toFloat( void ) const;
	int toInt ( void ) const;
	
	static Fixed min(Fixed &, Fixed &);
	static Fixed min(const Fixed &, const Fixed &);
	static Fixed max(Fixed &, Fixed &);
	static Fixed max(const Fixed &, const Fixed &);
	
private :
	int	value;
	static const int	partfract = 8;
};

std::ostream &operator<<( std::ostream &out, const Fixed &);

#endif
