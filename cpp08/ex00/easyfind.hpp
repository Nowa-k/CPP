/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:02:49 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/09 18:15:43 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <list>

#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

class NoFindNumber : public std::exception {
	const char *what() const throw(){
		return ("Impossible to find.");		
	}
};

template <typename T>
int easyfind(const T &vec, int n){
	typename T::const_iterator res = std::find(vec.begin(), vec.end(), n);
	try {
		if ( res == vec.end() )
			throw (NoFindNumber());
		std::cout << "Find : " << n << std::endl;
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
		return (0);
	}
	return (1);
}
#endif