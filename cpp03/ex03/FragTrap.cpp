/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:44:48 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/27 11:49:55 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Frag", 100, 50, 20)
{
	std::cout << GRN << "Create Fragtrap " << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 50, 20)
{
	std::cout << GRN << "Create Fragtrap" << std::endl;
}

FragTrap::FragTrap( std::string name, int HitPoint, int EnergyPoint, int attackDomage ) : ClapTrap(name, HitPoint, EnergyPoint, attackDomage)
{
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
