/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:57:44 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/04 11:55:43 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hpp/Base.hpp"

Base::~Base( void )
{
	return ;
}

A::A( void )
{
	return ;
}

A::~A( void )
{
	return ;
}

B::B ( void )
{
	return ;
}

B::~B( void )
{
	return ;
}

C::C( void )
{
	return ;
}

C::~C( void )
{
	return ;
}

Base *generate( void )
{
	srand(time(NULL));
	int random = rand() % 3;
	
	switch (random)
	{
	case 0:
		return (new A);
	case 1:
		return (new B);
	case 2:
		return (new C);
	default:
		return (NULL);
	}
}

void identify(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);
	if (a != NULL)
		std::cout << CYN << "Pointeur base is a A child" << WHT << std::endl;
	else
		std::cout << CYN << "Pointeur base isn't a A child" << WHT << std::endl;
	if (b != NULL)
		std::cout << MAG << "Pointeur base is a B child" << WHT <<std::endl;
	else
		std::cout << MAG << "Pointeur base isn't a B child" << WHT <<std::endl;
	if (c != NULL)
		std::cout << GRN << "Pointeur base is a C child" << GRN << std::endl;
	else
		std::cout << GRN << "Pointeur base isn't a C child" << GRN << std::endl;
}

void identify(Base &p)
{
	Base b;
	try {
		b = dynamic_cast<A&>(p);
		std::cout << CYN << "Pointeur base is a A child" << WHT << std::endl;
	}
	catch ( std::bad_cast &bc){
		std::cout << CYN << "Pointeur base isn't a A child" << WHT << std::endl;		
	}
	try {
		b = dynamic_cast<B&>(p);
		std::cout << MAG << "Pointeur base is a B child" << WHT << std::endl;
	}
	catch ( std::bad_cast &bc){
		std::cout << MAG << "Pointeur base isn't a B child" << WHT << std::endl;		
	}
	try {
		b = dynamic_cast<C&>(p);
		std::cout << GRN << "Pointeur base is a C child" << WHT << std::endl;
	}
	catch ( std::bad_cast &bc){
		std::cout << GRN << "Pointeur base isn't a C child" << WHT << std::endl;		
	}
}