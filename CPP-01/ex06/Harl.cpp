/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:54:03 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/11 12:56:38 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl()
{
	std::cout << GRN << "Harl is created." << WHT << std::endl;
	return ;
}

Harl::~Harl()
{
	std::cout << RED << "Harl is dead." << WHT << std::endl;
	return ;
}


void	Harl::debug( void )
{
	std::cout << RED << "[DEBUG]" << WHT << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void	Harl::info( void )
{
	std::cout << RED << "[INFO]" << WHT << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::warning( void )
{
	std::cout << RED << "[WARNING]" << WHT << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::error( void )
{
	std::cout << RED << "[ERROR]" << WHT << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void	Harl::complain(std::string level)
{
	int	index;
	std::string levels[4];
	void (Harl:: *fct[4])(void);
	
	index = 0;
	levels[3] = "DEBUG";
	levels[2] = "INFO";
	levels[1] = "WARNING";
	levels[0] = "ERROR";
	fct[3] = &Harl::debug;
	fct[2] = &Harl::info;
	fct[1] = &Harl::warning;
	fct[0] = &Harl::error;
	
	while (level != levels[index] && index < 4)
		index++;
	while (index + 1 && index > -1)
	{
		switch (index)
		{ 
			case 0:
				(this->*fct[0])();
				break;
			case 1:
				(this->*fct[1])();
				break;
			case 2:
				(this->*fct[2])();
				break;
			case 3:
				(this->*fct[3])();
				break;
			default:
				index = 0;
				std::cout << GRN << "Exemple : ./harlFilter [Level] {DEBUG, INFO, WARNING, ERROR}" << WHT << std::endl;
				break;
		}
		index--;
	}
}