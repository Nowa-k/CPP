/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:25:14 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/08 15:57:40 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "Weapon.h"

class Weapon {

public :
	Weapon( std::string _type );
	~Weapon();
	
	std::string	getType( void );
	void		setType( std::string name);

	Weapon( void );
	
private :
	std::string _type;

};

#endif