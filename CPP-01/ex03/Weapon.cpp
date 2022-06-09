/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:25:56 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/09 11:40:29 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(std::string name)
{
	_type = name;
	
	std::cout << "Weapon set." << std::endl;
	return ;
}

Weapon::~Weapon()
{
	std::cout << "Destroyed weapon." << std::endl;
	return ;
}

std::string Weapon::getType()
{
	return (_type);
}

void Weapon::setType( std::string name )
{
	_type = name;
	std::cout << "New weapon is " << _type << std::endl;
	return ;
}

Weapon::Weapon()
{
	_type = "Knife";
	
	std::cout << "Weapon set." << std::endl;
	return ;
}


