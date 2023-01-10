/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:56:35 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/29 18:40:01 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void )
{
	std::cout << CYN << "-------------Int-----------" << WHT << std::endl;
	std::vector<int> vector1;

	for (int i = 0; i <= 30; i ++)
		vector1.push_back(i);
	::easyfind(vector1, 10);
	std::cout << CYN << "--------------1-----------" << WHT << std::endl;
	::easyfind(vector1, 5);
	std::cout << CYN << "--------------2-----------" << WHT << std::endl;
	::easyfind(vector1, 1);
	std::cout << CYN << "--------------3-----------" << WHT << std::endl;
	::easyfind(vector1, 10);
	std::cout << CYN << "--------------4-----------" << WHT << std::endl;
	::easyfind(vector1, -5);

}