/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:42:11 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/20 16:36:19 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define WHT "\e[0;37m"

int main( void )
{
	Point A(1, 1);
	Point B(1, 5);
	Point C(5, 1);
	Point D(2, 2.2);
	
	Point W;
	W = A;
	bsp(A, B, C, D);

	Point E(1, 1);
	Point F(20, 1.2);
	Point G(1.2, 20.2);
	Point H(1.3, 2.2);
	
	bsp(E, F, G, H);

	Point I(1.1, 1.1);
	Point J(25.25, 1);
	Point K(1, 55);
	Point L(15.15, 20.20);
	
	bsp(I, J, K, L);

	Point M(100, 1);
	Point N(33, 100);
	Point O(1, 32.1);
	Point P(1.5, 31.1);
	
	bsp(M, N, O, P);
}