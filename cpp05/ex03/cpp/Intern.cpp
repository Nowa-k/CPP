/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:43:29 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/02 13:59:50 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hpp/Intern.hpp"

Intern::Intern( void )
{
	return ;
}

Intern::Intern( const Intern &i)
{
	*this = i;
	return ;
}

Intern::~Intern( void )
{
	return ;
}

Intern &Intern::operator=( const Intern &i )
{
	if (this == &i)
		return (*this);
	return (*this);
}

AForm *Intern::makeForm( std::string request, std::string target )
{
	AForm *a;
	std::string requestValid[3] = { "RobotomyRequestForm", "ShrubberyCreationForm" , "PresidentialPardonForm"};
	int i = 0;
	while (request != requestValid[i] && i++ < 3)
		;
	switch (i)
	{
	case 2:
		a = requestPres(target);
		break;
	case 1:
		a = requestShrum(target);
		break;
	case 0:
		a = requestRobo(target);
		break;
	default:
		throw Intern::FormNull();
		break;
	}
	return a;
}

AForm *Intern::requestRobo( std::string target )
{
	std::cout << MAG << "Intern creates RobotomyRequestForm" << WHT <<std::endl;
	return new RobotomyRequestForm( target );
}

AForm *Intern::requestPres( std::string target )
{
	std::cout << MAG << "Intern creates PresidentialPardonForm" << WHT << std::endl;
	return new PresidentialPardonForm( target );
}

AForm *Intern::requestShrum( std::string target )
{
	std::cout << MAG << "Intern creates ShrubberyCreationForm" << WHT << std::endl;
	return new ShrubberyCreationForm( target );
}

const char *Intern::FormNull::what() const throw()
{
	return "This form request doesn't exist";
}