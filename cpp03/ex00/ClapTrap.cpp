/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:12:48 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/27 10:06:42 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
	_name = "Bob";
	_HitPoint = 10;
	_EnergyPoint = 10;
	_AttackDamage = 0;
	std::cout << GRN << "Create " << _name << std::endl;
}

ClapTrap::ClapTrap (std:: string name)
{
	_name = name;
	_HitPoint = 10;
	_EnergyPoint = 10;
	_AttackDamage = 0;
	std::cout << GRN << "Create " << _name << std::endl; 
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	_name = c._name;
	_HitPoint = c._HitPoint;
	_EnergyPoint = c._EnergyPoint;
	_AttackDamage = c._AttackDamage;
	std::cout << GRN << "Create copie " << _name << std::endl; 
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "Delete " << _name << std::endl; 
}

ClapTrap &ClapTrap::operator= (const ClapTrap &c)
{
	this->_name = c._name;
	this->_HitPoint = c._HitPoint;
	this->_EnergyPoint = c._EnergyPoint;
	this->_AttackDamage = c._AttackDamage;
	std::cout << GRN << "Create copie with operator =." << std::endl; 
	return (*this);
}

void ClapTrap::attack(const std::string &target)
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
		std::cout << WHT << _name << " attack " << target << ", causing " << _AttackDamage << " points of damage !" << std::endl;
		_EnergyPoint--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_HitPoint <= 0)
	{
		std::cout << WHT << _name << " is alredy dead." << std::endl;
		return ;
	}
	std::cout << WHT << _name << " take " << amount << " damage." << std::endl;
	_HitPoint -= amount;
	if (_HitPoint <= 0)
		std::cout << WHT << _name << " is dead." << std::endl;
	else
		std::cout << WHT << _name << " have " << _HitPoint << " pdv." <<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ( _EnergyPoint  <= 0 || _HitPoint<= 0)
	{
		std::cout << WHT << "You have no more energy " << _name << std::endl;
		return ;
	}
	std::cout << WHT << _name << " take " << amount << " health." << std::endl;
	_HitPoint += amount;
	_EnergyPoint--;
	std::cout << WHT << _name << " have " << _HitPoint << " pdv." <<std::endl;
}

void ClapTrap::printInfo( void )
{
	std::cout << WHT << _name << ", Hitpoint " << _HitPoint << ", EnergyPoint " << _EnergyPoint << ", AttackDmg " << _AttackDamage << std::endl;
}

std::string ClapTrap::getName ()
{
	return _name;
}