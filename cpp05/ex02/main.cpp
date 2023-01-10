/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:19:00 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/02 14:19:00 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hpp/Bureaucrat.hpp"
#include "hpp/AForm.hpp"
#include "hpp/ShrubberyCreationForm.hpp"
#include "hpp/RobotomyRequestForm.hpp"
#include "hpp/PresidentialPardonForm.hpp"

int main(void)
{
    std::cout << std::endl << CYN << "--------------------test 1------------------------" << WHT << std::endl << std::endl;

	{
		try
		{
			Bureaucrat Jacky("Jacky", 12);
			ShrubberyCreationForm Shrum("lfilloux");
			Shrum.beSigned(Jacky);
			Shrum.execute(Jacky);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
	}
	}
    std::cout << std::endl << CYN << "--------------------test 2------------------------" << WHT << std::endl << std::endl;
	{
		try
		{
			Bureaucrat B("Boss", 1);
			RobotomyRequestForm Robo("The king");
			B.signForm(Robo);
			Robo.beSigned(B);
			Robo.execute(B);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
    std::cout << std::endl << CYN << "--------------------test 3------------------------" << WHT << std::endl << std::endl;
	{
		try
		{
			Bureaucrat B("Charle XV", 1);
			PresidentialPardonForm Robo("Lfilloux");
			Robo.beSigned(B);
			Robo.execute(B);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
    std::cout << std::endl << CYN << "--------------------test 4------------------------" << WHT << std::endl << std::endl;
	{
		try
		{
			Bureaucrat B("Little cat", 0);
			PresidentialPardonForm Formulaire("J-P Papin");
			PresidentialPardonForm Bis;
			Bis = Formulaire;
			std::cout << Formulaire;
			std::cout << Bis;
			Bis.beSigned(B);
			B.executeForm(Bis);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
    return (0);
}