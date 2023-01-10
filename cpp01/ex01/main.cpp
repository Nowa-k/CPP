/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:29:49 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/07 15:12:31 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	int		i;
	Zombie	*B;
	
	B = zombieHorde(10, ("BOB"));
	for (i = 0; i < 10; i++)
		B[i].announce();
	delete[] B;
	return (0);
}