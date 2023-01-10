/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:19:06 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/09 12:00:53 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Whatever.hpp"

int main( void )
{
	{
		std::cout << MAG << "Default : "<< CYN << "int" << WHT <<std::endl;
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "swap( a, b ) : a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::cout << MAG << "Default : "<< CYN << "std::string" << WHT <<std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		std::cout << "c = " << c << ", d = " << d << std::endl;
		::swap(c, d);
		std::cout << "swap( c, d ) : c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{
		std::cout << MAG << "Const : "<< CYN << "int" << WHT <<std::endl;
		const int a = 2;
		const int b = 3;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::cout << MAG << "Const : "<< CYN << "std::string" << WHT <<std::endl;
		const std::string c = "chaine1";
		const std::string d = "chaine2";
		std::cout << "c = " << c << ", d = " << d << std::endl;
	}
	return (0);
}
