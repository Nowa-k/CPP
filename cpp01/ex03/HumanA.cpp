/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:14:46 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/09 11:39:57 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

HumanA::HumanA(std::string name, Weapon &weap) : _name(name), weapon(weap)
{
	std::cout << name << " is ready to fight." << std::endl;
	return ;
}

HumanA::~HumanA()
{
	std::cout << _name << " is dead." << std::endl;
	return ;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << weapon.getType() << std::endl;
}

