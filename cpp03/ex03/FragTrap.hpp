/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:44:55 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/27 11:49:37 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public :
		FragTrap();
		FragTrap( std::string name, int HitPoint, int EnergyPoint, int attackDomage );
		FragTrap( std::string );
		FragTrap( const FragTrap & );
		~FragTrap();
		FragTrap &operator=( const FragTrap &);
	
		void highFivesGuys(void);
};

#endif