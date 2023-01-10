/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:17:24 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/09 11:26:49 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.h"

class HumanB {
	
public :
	HumanB(std::string _name);
	~HumanB();

	void	attack( void );
	void	setWeapon( Weapon &weap );

	std::string	_name;
	Weapon		*weapon;
};

#endif