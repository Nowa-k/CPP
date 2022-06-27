/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:13:04 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/27 16:24:42 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define WHT "\e[0;37m"

class ClapTrap {

private :
	std::string	_name;
	int			_HitPoint;
	int			_EnergyPoint;
	int			_AttackDamage;

public :
	ClapTrap();
	ClapTrap( std::string );
	ClapTrap ( const ClapTrap & );
	~ClapTrap();
	ClapTrap &operator= (const ClapTrap & );

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName( void );
	void printInfo( void );
};
      
#endif