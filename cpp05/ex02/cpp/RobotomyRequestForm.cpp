/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:18:37 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/02 14:18:38 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hpp/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm ( void ) : AForm("RobotomyRequestForm", 45, 72, "Random")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm ( std::string target ) : AForm("RobotomyRequestForm", 45, 72, target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &s )
{
	*this = s;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &s )
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

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	return ;
}

void RobotomyRequestForm::doWork( Bureaucrat const &executor ) const
{
	std::cout << executor.getName() << " execute " << this->getName() << std::endl;
	std::cout << "Vrrrrrrr Vrrrrrrrrr Vrrrrrrrrr, you're a little coin coin, Vrrrrrr Vrrrrrrrr..." << std::endl;
	srand(time(NULL));
	int random = rand() % 2;
	if (random == 0)
		std::cout << this->getTarget() << " : I'm a little coin coin." << std::endl;
	else
		std::cout << "Mission fail : " << this->getTarget() << " isn't robotomized. Sorry" << executor.getName() << "." << std::endl;
}