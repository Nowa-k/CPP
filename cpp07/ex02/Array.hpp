/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:54:47 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/09 12:05:21 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

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
class Array {
	public :
		Array<T>( void ) : _n(0), _content(new T[_n]()){
			std::cout << GRN << "Array default." << WHT << std::endl;
		}
		
		Array<T>( unsigned int n ) : _n(n), _content(new T[_n]()){
			std::cout << GRN << "Array with n." << WHT << std::endl;
			for (unsigned int index = 0; index < n; index ++)
				this->_content[index] = T();	
		}
		
		Array<T>( const Array &a ){
			std::cout << GRN << "Copie constructor." << WHT << std::endl;	
			this->_n = a._n;
			this->_content = new T[_n]();
			for (unsigned int index = 0; index < _n; index ++)
				this->_content[index] = a._content[index];
		}
		
		Array<T> &operator=( const Array &a){
			std::cout << GRN << "Assignment operator." << WHT << std::endl;
			if (this == &a)
				return *this;
			delete [] this->_content;
			this->_n = a._n;
			this->_content = new T[_n];
			for (unsigned int index = 0; index < _n; index ++)
				this->_content[index] = a._content[index];
			return *this;
		}
		
		~Array<T>( void ){
			delete[] _content;
			std::cout << RED << "Delete Array" << WHT << std::endl;
		}
		
		class BadIndice : public std::exception {
			const char *what() const throw(){
				return ("Indice doesn't exist.");
			}
		};
		
		T &operator[](const unsigned int i){
			if (i > _n)
			{
				std::cout << std::endl;
				throw (Array::BadIndice());
			}
			return (this->_content[i]);
		}

		T &operator[](const unsigned int i) const
		{
			if (i > _n)
			{
				std::cout << std::endl;
				throw (Array::BadIndice());
			}
			return (this->_content[i]);
		}
		
		unsigned int size( void ){
			return (this->_n);
		}

	private :
		unsigned int _n;
		T *_content;
};
#endif