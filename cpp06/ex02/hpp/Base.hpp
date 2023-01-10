/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:50:35 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/28 17:26:34 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

#include <iostream>

class Base {
	public :
		virtual ~Base();	
};

class A : public Base{
	public :
		A( void );
		~A( void );
};

class B : public Base {
	public :
		B( void );
		~B( void );
};

class C : public Base {
	public :
		C( void );
		~C( void );
};

Base *generate( void );
void identify(Base *p);
void identify(Base& p);

#endif