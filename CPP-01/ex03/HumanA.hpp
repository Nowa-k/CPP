/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:02:27 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/08 15:59:44 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.h"

class HumanA {
	
public :
	HumanA(std::string _name, Weapon &Weap );
	~HumanA();

	void	attack( void );

	std::string	_name;
	Weapon		&weapon;
};

#endif