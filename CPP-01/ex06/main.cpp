/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:56:24 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/11 12:30:29 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl h = Harl();
		h.complain(argv[1]);
		return (1);
	}
	else
		std::cout << GRN << "Exemple : ./harlFilter [Level] {DEBUG, INFO, WARNING, ERROR}" << WHT << std::endl;
	return (0);
}