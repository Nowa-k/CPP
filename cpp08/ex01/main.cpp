/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:17:34 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/14 10:05:33 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void )
{
	std::cout << CYN << "---------------Pos--------------" << WHT << std::endl;
	try {
		Span sp(3);
		sp.addNumber(10);
		sp.addNumber(1000);
		sp.addNumber(600);
		sp.addNumber(999);

		std::cout << "Short : "<< sp.shortestSpan() << std::endl;
		std::cout << "Long : "<< sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << CYN << "---------------Neg--------------" << WHT << std::endl;
	try {
		Span sp(3);
		sp.addNumber(-10);
		sp.addNumber(-1000);
		sp.addNumber(-600);

		std::cout << "Short : "<< sp.shortestSpan() << std::endl;
		std::cout << "Long : "<< sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
		std::cout << CYN << "---------------Neg && Pos--------------" << WHT <<std::endl;
	try {
		Span sp(3);
		sp.addNumber(-10);
		sp.addNumber(1000);
		sp.addNumber(-600);

		std::cout << "Short : "<< sp.shortestSpan() << std::endl;
		std::cout << "Long : "<< sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << CYN << "---------------vec over--------------" << WHT <<std::endl;
	try {
		Span sp(3);
		sp.addNumber(-10);

		std::cout << "Short : "<< sp.shortestSpan() << std::endl;
		std::cout << "Long : "<< sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << CYN << "---------------Complete vec--------------" << WHT <<std::endl;
	try {
		std::vector<int> tab(15000);
		Span sp(15000);
		sp.completeContener(tab);
		std::cout << "Short : "<< sp.shortestSpan() << std::endl;
		std::cout << "Long : "<< sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (1);
}
