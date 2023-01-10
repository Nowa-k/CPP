/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:44:55 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/27 11:50:52 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap( std::string );
		ScavTrap( std::string, int hitPoint, int energyPoint, int attackDomage);
		ScavTrap( const ScavTrap & );
		virtual ~ScavTrap();
		ScavTrap &operator=( const ScavTrap &);
	
		void guardGate();
		void attack(const std::string &);
};

#endif