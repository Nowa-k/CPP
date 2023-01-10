/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:54:34 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/09 12:03:47 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define BTEST 20
int main( void )
{
	std::cout << CYN << "-----------------Default constructeur-----------------" << WHT << std::endl;
	try 
	{
		Array<int> firstA;
		Array<int> firstB(BTEST);

		firstB[3] = 5;
		std::cout << "Case  firstA[99] : " << firstA[99] << std::endl;
		std::cout << "Case  firstB[3] : " << firstB[3] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << CYN << "-----------------Copy-----------------" << WHT << std::endl;
	try 
	{
		Array<int> firstA(BTEST);
		firstA[3] = 5;
		Array<int> firstB = firstA;
		firstB[4] = 6;
		std::cout << "Case  firstA[3] : " << firstA[3] << std::endl;
		std::cout << "Case  firstB[3] : " << firstB[3] << std::endl;

		std::cout << "Case  firstA[4] : " << firstA[4] << std::endl;
		std::cout << "Case  firstB[4] : " << firstB[4] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << CYN << "-----------------Operator =-----------------" << WHT << std::endl;
	try 
	{
		Array<int> firstA(BTEST);
		Array<int> firstB;

		firstA[3] = 12;
		firstB = firstA;
		std::cout << "Case  firstA[3] : " << firstA[3] << std::endl;
		std::cout << "Case  firstB[3] : " << firstB[3] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << CYN << "-----------------Const-----------------" << WHT << std::endl;
	try 
	{
		Array<int> const firstA(BTEST);
		Array<std::string> const firstB(BTEST);
		
		firstA[3] = 1;
		firstB[2] = "Dude";	
		std::cout << "Case  firstA[3] : " << firstA[3] << std::endl;
		std::cout << "Case  firstB[2] : " << firstB[2] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << CYN << "-----------------End-----------------" << WHT << std::endl;
	return (0);
}
