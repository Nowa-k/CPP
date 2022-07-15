/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra < aleferra@student.42lyon.fr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:12:35 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/28 17:38:41 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "Scavtrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap A;
	FragTrap B("Roger");
	ScavTrap C("Jean");
	ScavTrap D = C;


	//A.printInfo();
	//A.attack("Roger");
	//C.printInfo();
	//C.guardGate();
	A.takeDamage(50);
	C.attack("Roger");
	D.attack("love");
	B.highFivesGuys();
	C.printInfo();
	//A.guardGate():
	A.printInfo();
	B.printInfo();
	C.printInfo();
}