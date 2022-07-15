/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra < aleferra@student.42lyon.fr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:44:48 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/28 17:19:13 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fragtrap.hpp"

FragTrap::FragTrap()
{
    _name = "Bob";
	_HitPoint = 100;
	_EnergyPoint = 100;
	_AttackDamage = 30;
	std::cout << GRN << "Create Fragtrap " << std::endl;
}

FragTrap::FragTrap( std::string name)
{
    _name = name;
	_HitPoint = 100;
	_EnergyPoint = 100;
	_AttackDamage = 30;
	std::cout << GRN << "Create Fragtrap" << std::endl;
}

FragTrap::FragTrap( const FragTrap &s)
{
    _name = s._name;
    _HitPoint = s._HitPoint;
    _EnergyPoint = s._EnergyPoint;
    _AttackDamage = s._AttackDamage;
}

FragTrap::~FragTrap()
{
    std::cout << RED << "Delete Frag" << std::endl;
    return ;
}

FragTrap &FragTrap::operator=( const FragTrap &s )
{
    _name = s._name;
    _HitPoint = s._HitPoint;
    _EnergyPoint = s._EnergyPoint;
    _AttackDamage = s._AttackDamage;
    return *this;
}

void    FragTrap::highFivesGuys( void )
{
    std::cout << WHT << "Please give me high five, please, friends, someone ..." << std::endl;
}
