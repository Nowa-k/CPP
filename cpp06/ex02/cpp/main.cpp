/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:01:09 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/28 17:45:04 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hpp/Base.hpp"

int main( void )
{
	std::cout << YEL << "-------------Pointeur------------" << WHT << std::endl;
	{
		Base *R = generate();
		identify(R);
		delete R;
	}
	std::cout << YEL << "-------------Reference------------" << std::endl;
	{
		Base *R = generate();
		identify(*R);
		delete R;
	}
	return (1);
}