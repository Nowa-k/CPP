/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:42:11 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/21 10:59:22 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define WHT "\e[0;37m"

int main( void )
{
	{
		
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) / Fixed( 2 ) );
	
	std::cout << b << std::endl;
	//std::cout << ++b << std::endl;
	std::cout << b << std::endl;
	//std::cout << b++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::min( a, b ) << std::endl;
	}
		{
	Fixed a(1);
	Fixed const b( Fixed( 5.05f ) / Fixed( 0 ) );
	
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	}
	return 0;
}