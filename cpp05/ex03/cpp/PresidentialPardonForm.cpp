/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:20:14 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/02 14:20:15 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hpp/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm ( void ) : AForm("PresidentialPardonForm", 5, 25, "Random")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm ( std::string target ) : AForm("PresidentialPardonForm", 5, 25, target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &s )
{
	*this = s;
}

PresidentialPardonForm &PresidentialPardonForm::operator= ( const PresidentialPardonForm &s )
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

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return ;
}

void PresidentialPardonForm::doWork( Bureaucrat const &executor ) const
{
	std::cout << executor.getName() << " execute " << this->getName() << std::endl;
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}