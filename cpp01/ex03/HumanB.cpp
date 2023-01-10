/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:22:59 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/11 12:58:26 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

HumanB::HumanB (std::string name)
{
	_name = name;
	std::cout << name << " is created." << std::endl;
	return ;
}

HumanB::~HumanB ()
{
	std::cout << _name << " is dead." << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weap)
{
	weapon = &weap;
}

void	HumanB::attack()
{
	if (!weapon)
		std::cout << _name << " couldn't attack." << std::endl;
	else
		std::cout << _name << " attacks with their " << weapon->getType() << std::endl;
}