/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:12:35 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/03 10:04:35 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap D("Caarlos");
	DiamondTrap A;

	std::cout << CYN << "------------Print D---------" << WHT << std::endl;
	D.printInfo();
	D.guardGate();
	D.highFivesGuys();
	for (int i = 0; i < 55; i++)
		D.attack("Fooool");
	D.whoAmI();
	D.printInfo();
	std::cout << CYN << "------------Print A---------" << WHT << std::endl;
	A.whoAmI();
	A = D;
	A.whoAmI();
	A.printInfo();
}