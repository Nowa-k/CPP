/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:17:21 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/03 11:19:01 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

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

class Span {
	public :
		Span ( unsigned int max );
		Span( const Span &s );
		Span &operator= ( const Span &s );
		~Span();

		void addNumber( int value );
		long long int shortestSpan();
		long long int longestSpan();
		
		class  OutOfRange: public std::exception
		{
			public:
				virtual const char* what () const throw();
		};

		class  NoNb: public std::exception
		{
			public:
				virtual const char* what () const throw();
		};
		
		template <typename T>
		void completeContener(const T &list)
		{
			srand(time(NULL));
			T bis;
			bis = const_cast<T&>(list);
			for (typename T::iterator itr = bis.begin(); itr != bis.end(); itr++)
				this->vec->push_back(rand());
		}

	private:
		Span();
		unsigned int _max;
		std::vector<int> *vec;
};

#endif