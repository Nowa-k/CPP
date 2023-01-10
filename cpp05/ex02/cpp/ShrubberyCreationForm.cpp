/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:26:18 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/02 14:18:35 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hpp/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm ( void ) : AForm("ShrubberyCreationForm", 137, 145, "Random")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm ( std::string target ) : AForm("ShrubberyCreationForm", 137, 145, target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &s )
{
	*this = s;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator= ( const ShrubberyCreationForm &s )
{
	if( this == &s )
		return *this;
	this->setGradeExec(s.getGradeToExec());
	this->setName(s.getName());
	this->setLastSign(s.getLastSign());
	this->setIsSigned(s.getIsSigned());
	this->setTarget(s.getTarget());
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	return ;
}


void ShrubberyCreationForm::doWork( Bureaucrat const &executor ) const
{ 
	std::cout << executor.getName() << " execute " << this->getName() << std::endl;
	std::string title;
	title = getTarget() + "_shrubbery";
	std::ofstream f(title);
	if (!f.is_open())
		std::cout << RED << "Open files failure" << WHT << std::endl;
	else
	{
		f << "    -------  " << std::endl;
		f << "   --------- "<< std::endl;
		f << "  -----------  " << std::endl;
		f << " ---*---------" << std::endl;
		f << " --------*----" << std::endl;
		f << "  ----------- "<< std::endl;
		f << "   ------*-- " << std::endl;
		f << "    -------" << std::endl;
		f << "      | |    " << std::endl;
		f << "     _| |_   " << std::endl;
		f << "==============" << std::endl;
		f.close();
		std::cout << GRN << "Create beautiful Shrubbery for " << executor.getName() << std::endl;
	}
}