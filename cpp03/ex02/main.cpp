/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:12:35 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/27 11:00:37 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "Scavtrap.hpp"
#include "FragTrap.hpp"

int main(void)
{

	std::cout << WHT << "----------------Claptrap----------------" << std::endl;
	{
		ClapTrap A;
		std::cout << WHT << "---------------" << WHT << std::endl;
		A.attack("Random");
		for (int i = 0; i < 20 ; i++)
			A.beRepaired(10);
		A.attack("Random");
		//A.guardGate();
		//A.highFivesGuys();
		A.printInfo();
	}
	
	std::cout << WHT << "----------------Fragtrap----------------" << std::endl;
	{
		FragTrap A("Roger");
		std::cout << WHT << "---------------" << WHT << std::endl;
		FragTrap B = A;
		std::cout << WHT << "---------------" << WHT << std::endl;
		FragTrap C;
		A.printInfo();
		for (int i = 0; i < 101 ; i++ )
			A.attack("Hurleur");
		A.highFivesGuys();
		//A.guardGate();
		C = A;
		A.printInfo();
		B.printInfo();
		C.printInfo();
	}
	
	std::cout << WHT << "----------------Scavtrap----------------" << std::endl;
	{
		ScavTrap C("Scav");
		std::cout << WHT << "---------------" << WHT << std::endl;
		ScavTrap D = C;
		std::cout << WHT << "---------------" << WHT << std::endl;
		ScavTrap E;
		C.printInfo();
		D.printInfo();
		E.printInfo();
		C.printInfo();
		C.guardGate();
		for (int i = 0; i < 51; i++)
			C.attack("Roger");
		E = C;
		C.guardGate();
		//C.highFive();
		C.printInfo();
		D.printInfo();
		E.printInfo();
	}
}