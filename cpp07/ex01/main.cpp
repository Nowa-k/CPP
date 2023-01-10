/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:42:08 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/09 11:58:18 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main( void )
{
	{
		std::cout << MAG << "Default : " << CYN << "Tableau de int" << WHT <<std::endl;
		int intTab[] = {5, 10, 99, -5, 6};
		::iter(intTab, 5, &print);
		std::cout << MAG << "Default : " << CYN << "Tableau de string" << WHT <<std::endl;
		std::string str[4] = {"autre", "chaine", "de" , "cara"};
		::iter(str, 4, &print);
	}
	
	{
		std::cout << MAG << "Constant : " << CYN << "Tableau de int" << WHT <<std::endl;
		int const intTab[] = {5, 10, 99, -5, 6};
		::iter(intTab, 5, &print);
		std::cout << MAG << "Constant : " << CYN << "Tableau de string" << WHT <<std::endl;
		std::string const str[4] = {"autre", "chaine", "de" , "cara"};
		::iter(str, 4, &print);
	}
	
	return (0);
}