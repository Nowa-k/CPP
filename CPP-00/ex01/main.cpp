/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra < aleferra@student.42lyon.fr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:14:40 by aleferra          #+#    #+#             */
/*   Updated: 2022/07/19 11:43:29 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int main(void)
{
	Phonebook p;
	std::string cmd;
	while (1)
	{
		std::cout << "Command valid: ADD SEARCH EXIT" << std::endl;
		cmd = "";
		while (cmd.empty())
		{
			std::getline(std::cin, cmd);
			if (std::cin.eof())
				exit(0);
		}
		if (cmd == "ADD")
			p.addContact();
		else if (cmd == "SEARCH")
			p.search();
		else if (cmd == "EXIT")
			p.pbExit();
		else
			std::cout << "";
		std::cout << std::endl;
	}
}