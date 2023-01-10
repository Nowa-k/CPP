/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:52:09 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/08 11:26:14 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie *zombieHorde( int N, std::string name )
{
	int	i;
	Zombie *Z = new Zombie[N];

	for (i = 0; i < N; i++)
		Z[i]._name = (name);
	
	return (Z);
}