/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:19:33 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/02 14:19:33 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
   	try
	{
		Bureaucrat Jacky("Jacky", 0);
		std::cout << Jacky;
		Jacky.increment();
		std::cout << Jacky;
		Jacky.decrement();
		Jacky.decrement();
		std::cout << Jacky;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << CYN << "--------------------------------" << WHT << std::endl;
	try
	{
		Bureaucrat Jacky("Jacky", -5);
		std::cout << Jacky;
		Jacky.decrement();
		std::cout << Jacky;
		Jacky.increment();
		std::cout << Jacky;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << CYN << "--------------------------------" << WHT << std::endl;
	try
	{
		Bureaucrat Jacky("Jacky", 10);
		Bureaucrat Paul(Jacky);
		std::cout << Jacky;
		std::cout << Paul;
		Jacky.decrement();
		std::cout << Jacky;
		Jacky.increment();
		std::cout << Jacky;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    return (0);
}