/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:54:06 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/10 14:03:11 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include "Harl.h"

class Harl {

public :
	Harl();
	~Harl();
	
	void	complain( std::string level );

private :
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
};

#endif