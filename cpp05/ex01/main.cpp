/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:19:23 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/02 14:19:23 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << CYN << "---------test 1--------" << WHT << std::endl << std::endl;
   	try
	{
		Bureaucrat Jacky("Jacky", 80);
		Form Regist("Information", 75, 160);
		Regist.beSigned(Jacky);
		std::cout << Regist;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << CYN << "-------test 2--------" << WHT << std::endl << std::endl;

	try
	{
		Bureaucrat B("Toto", 60);
		Form R("Birthday", 75, 75);
		R.beSigned(B);
		std::cout << R;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << CYN << "-------test 3--------" << WHT << std::endl << std::endl;

	try
	{
		Bureaucrat B("Joseph", 80);
		Form R("Happy", 60, 140);
		Form F;
		B.signForm(R);
		F = R;
		std::cout << R;
		std::cout << F;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << CYN << "-------test 4--------" << WHT << std::endl << std::endl;

	try
	{
		Bureaucrat B("Joseph", 60);
		Form R("Happy", 80, 75);
		B.signForm(R);
		std::cout << R;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    return (0);
}