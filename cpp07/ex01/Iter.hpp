/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:42:46 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/09 11:55:57 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

template<typename T>
void print(T &v){
	std::cout << "Value : " << v << std::endl;
}

template<typename T>
void iter(T *tab, int const &len, void (*fct)(T &t)){
	for (int index = 0; index < len; index++)
		fct(tab[index]);
}


template<typename T>
void iter(T const *tab, int const &len, void (*fct)(const T &t))
{
	for (int index = 0; index < len; index++)
		fct(tab[index]);
}

#endif 