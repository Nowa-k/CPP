/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:12:35 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/27 10:15:47 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "Scavtrap.hpp"

int main(void)
{
	ClapTrap A;
	std::cout << WHT << "---------------" << WHT << std::endl;
	ClapTrap B("Roger");
	std::cout << WHT << "---------------" << WHT << std::endl;
	ScavTrap C("Jean");
	std::cout << WHT << "---------------" << WHT << std::endl;
	ScavTrap D = C;
	std::cout << WHT << "---------------" << WHT << std::endl;
	ScavTrap E;

	A.printInfo();
	B.printInfo();
	C.printInfo();
	D.printInfo();
	E.printInfo();
	A.attack("Roger");
	//A.guardGate();
	C.printInfo();
	C.guardGate();
	for (int i = 0; i < 60; i++)
		C.attack("Roger");
	E = C;
	A.printInfo();
	B.printInfo();
	C.printInfo();
	D.printInfo();
	E.printInfo();
}