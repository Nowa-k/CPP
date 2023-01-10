/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:34:48 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/13 15:04:11 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "Zombie.h"

class Zombie {

public :
	std::string _name;
	
	Zombie( std::string name );
	~Zombie ( void );

	void	announce( void );

	Zombie( void );
};

#endif