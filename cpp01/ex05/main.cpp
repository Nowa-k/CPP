/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:56:24 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/11 12:18:18 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main(void)
{
	Harl h = Harl();
	h.complain("yrdy");
	std::cout << "---------------------------" << std::endl;
	h.complain("WARNING");
	std::cout << "---------------------------" << std::endl;
	h.complain("ERROR");
	std::cout << "---------------------------" << std::endl;
	h.complain("test");
	std::cout << "---------------------------" << std::endl;
	h.complain("INFO");
	std::cout << "---------------------------" << std::endl;
	h.complain("DEBUG");	
}