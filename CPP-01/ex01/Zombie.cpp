/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:28:40 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/08 11:25:37 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << _name << " is reborn !" << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << _name << " is dead." << std::endl;
}

void Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
	std::cout << "Zombie is reborn !" << std::endl;
	return ;
}