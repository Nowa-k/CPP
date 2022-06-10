/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:54:03 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/10 15:44:28 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl()
{
	std::cout << GRN << "Harl is create." << WHT << std::endl;
	return ;
}

Harl::~Harl()
{
	std::cout << RED << "Harl is dead." << WHT << std::endl;
	return ;
}


void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	(void) level;
	void (Harl:: *fct[4])(void);

	fct[0] = &Harl::debug;
	fct[1] = &Harl::info;
	fct[2] = &Harl::warning;
	fct[3] = &Harl::error;

	(this->*fct[0])();
	(this->*fct[1])();
	(this->*fct[2])();
	(this->*fct[3])();
}