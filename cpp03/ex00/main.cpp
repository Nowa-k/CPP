/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:12:35 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/27 10:03:55 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap A;
	ClapTrap B("Roger");
	ClapTrap C("Flex");
	ClapTrap D = C;
	ClapTrap E;

	A.printInfo();
	A.attack("Roger");
	A.beRepaired(15);
	A.beRepaired(15);
	A.beRepaired(15);
	A.beRepaired(15);
	A.beRepaired(15);
	A.beRepaired(15);
	A.beRepaired(15);
	A.beRepaired(15);
	A.beRepaired(15);
	A.beRepaired(15);
	A.beRepaired(15);
	A.attack("Roger");
	A.beRepaired(15);
	A.beRepaired(15);
	E = A;
	
	A.printInfo();
	B.printInfo();
	C.printInfo();
	D.printInfo();
	E.printInfo();
	B.attack(D.getName());
}