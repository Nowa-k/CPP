/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:19:44 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/02 14:19:44 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hpp/Bureaucrat.hpp"
#include "hpp/AForm.hpp"
#include "hpp/ShrubberyCreationForm.hpp"
#include "hpp/RobotomyRequestForm.hpp"
#include "hpp/PresidentialPardonForm.hpp"
#include "hpp/Intern.hpp"

int main(void)
{
	{
		try
		{
			Bureaucrat B("Aleferra", 44);
			AForm *f;
			Intern lfilloux;
			f = lfilloux.makeForm("RobotomyRequestForm", "Lfilloux");
			f->beSigned(B);
			B.executeForm(*f);
			delete f;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	std::cout << CYN << "--------------------------------------------" << WHT << std::endl;
	{
		try
		{
			Bureaucrat B("Aleferra", 35);
			AForm *f;
			Intern lfilloux;
			f = lfilloux.makeForm("ShrubberyCreationForm", "Lfilloux");
			f->beSigned(B);
			B.executeForm(*f);
			delete f;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	std::cout << CYN << "--------------------------------------------" << WHT << std::endl;
	{
		try
		{
			Bureaucrat B("Aleferra", 12);
			AForm *f;
			Intern lfilloux;
			f = lfilloux.makeForm("PresidentialPardonForm", "Lfilloux");
			f->beSigned(B);
			B.executeForm(*f);
			delete f;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << CYN << "--------------------------------------------" << WHT << std::endl;
	{
		try
		{
			Bureaucrat B("Aleferra", 120);
			AForm *f;
			Intern lfilloux;
			f = lfilloux.makeForm("ehrgjk", "Lfilloux");
			f->beSigned(B);
			B.executeForm(*f);
			delete f;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
#include "hpp/PresidentialPardonForm.hpp"
}