/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:32:33 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/15 11:49:18 by aleferra         ###   ########.fr       */
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
	Fixed (const Fixed &f);
	~Fixed();

	Fixed &operator= (const Fixed &);

	int getRawBits ( void ) const;
	void setRawBits ( int const raw );
	float toFloat( void ) const;
	int toInt ( void ) const;

private :
	int	value;
	static const int	partfract = 8;
};

std::ostream &operator<<( std::ostream &out, const Fixed &);

#endif
