/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:09:05 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/09 11:46:04 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

template <typename T>
T const &min(T const &a, T const &b){
	return ((a <= b) ? a : b);
}

template <typename T>
T const &max(T const &a, T const &b){
	return ((a >= b) ? a : b);
}

template <typename T> 
T &min(T &a, T &b)
{
	return ((a <= b) ? a : b);
}

template <typename T>
T &max(T &a, T &b)
{
	return ((a >= b) ? a : b);
}

template <typename T>
void swap(T &a, T &b){
	T c = a;
	a = b;
	b = c;
}

#endif
