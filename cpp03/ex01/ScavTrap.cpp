/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:44:48 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/27 11:14:02 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Clap", 100, 50, 20)
{
	std::cout << GRN << "Create Scavtrav " << std::endl;
}

ScavTrap::ScavTrap( std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << GRN << "Create Scavtrav" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &s)
{
    _name = s._name;
    _HitPoint = s._HitPoint;
    _EnergyPoint = s._EnergyPoint;
    _AttackDamage = s._AttackDamage;
	std::cout << GRN << "Create Scavtrav copie" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << RED << "Delete Scavtrap" << WHT << std::endl;
    return ;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &s )
{
    _name = s._name;
    _HitPoint = s._HitPoint;
    _EnergyPoint = s._EnergyPoint;
    _AttackDamage = s._AttackDamage;
    return *this;
}

void    ScavTrap::guardGate( void )
{
    std::cout << WHT << _name << " is now in Gate keeper mode !" << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
	if ( _EnergyPoint  <= 0 || _HitPoint<= 0)
	{
		std::cout << WHT << "You have no more energy " << _name << std::endl;
		return ;
	}
	if (_name == target)
		std::cout << WHT << "D'ont hit yoursel, fool" << std::endl;
	else
	{
		std::cout << WHT << _name << " the terror attack " << target << ", causing " << _AttackDamage << " points of damage !" << std::endl;
		_EnergyPoint--;
	}
}