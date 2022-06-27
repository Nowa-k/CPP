/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:12:35 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/27 16:25:52 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap A;
	ClapTrap B("Roger");
	ClapTrap C("Flex");
	ClapTrap D = C;

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
	A.beRepaired(15);
	A.beRepaired(15);
	A.printInfo();
	B.printInfo();
	D.printInfo();
	B.attack(D.getName());
}