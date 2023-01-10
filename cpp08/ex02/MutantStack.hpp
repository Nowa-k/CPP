/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:50:18 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/14 10:47:55 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <string>
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
class MutantStack : public std::stack<T>
{
	public :
		MutantStack () {
			std::cout << "MutantStack constructor called." << std::endl;
			return ;
		}
		
		MutantStack (const MutantStack &mutantstack) {
			*this = mutantstack;
			std::cout << "MutantStack copy constructor called." << std::endl;
			return ;
		}
		
		~MutantStack () {
			std::cout << "MutantStack destructor called." << std::endl;
			return ;
		}

		using std::stack<T>::pop;
		using std::stack<T>::push;
		using std::stack<T>::size;
		using std::stack<T>::top;
		using std::stack<T>::operator=;

		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		iterator begin() {return (this->c.begin() );};
		const_iterator begin() const {return (this->c.begin());};
		iterator end() {return (this->c.end());};
		const_iterator end() const {return (this->c.end());};
		reverse_iterator rbegin() {return (this->c.rbegin());};
		const_reverse_iterator rbegin() const {return (this->c.rbegin());};
		reverse_iterator rend() {return (this->c.rend());};
		const_reverse_iterator rend() const {return (this->c.rend());};
		
};

#endif