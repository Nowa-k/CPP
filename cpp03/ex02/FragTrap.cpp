/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:44:48 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/27 10:56:29 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Claptrap", 100, 100, 30)
{
	std::cout << GRN << "Create Fragtrap " << std::endl;
}

FragTrap::FragTrap( std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << GRN << "Create Fragtrap" << std::endl;
}

FragTrap::FragTrap( const FragTrap &s)
{
    _name = s._name;
    _HitPoint = s._HitPoint;
    _EnergyPoint = s._EnergyPoint;
    _AttackDamage = s._AttackDamage;
	std::cout << GRN << "Create Fragtrap copie" << std::endl;

}

FragTrap::~FragTrap()
{
    std::cout << RED << "Delete Frag" << std::endl;
    return ;
}

FragTrap &FragTrap::operator=( const FragTrap &s )
{
    this->_name = s._name;
    this->_HitPoint = s._HitPoint;
    this->_EnergyPoint = s._EnergyPoint;
    this->_AttackDamage = s._AttackDamage;
	std::cout << GRN << "FragTrap operator = called" << std::endl;
    return *this;
}

void    FragTrap::highFivesGuys( void )
{
    std::cout << WHT << "Please give me high five, please, friends, someone ..." << std::endl;
}
