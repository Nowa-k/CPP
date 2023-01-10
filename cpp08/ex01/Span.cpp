/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:44:55 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/14 10:04:02 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) : _max(0), vec(new std::vector<int>[0]()){
	std::cout << GRN << "Default constructor." << WHT << std::endl;
}

Span::Span( unsigned int max) : _max(max), vec(new std::vector<int>[_max]()){
	std::cout << GRN << "Constructor with max." << WHT << std::endl;
}

Span::Span ( const Span &s){
	std::cout << GRN << "Copy constructor." << WHT << std::endl;
	*this = s;
}

Span &Span::operator=( const Span &s){
	if (this == &s)
		return (*this);
	std::cout << GRN << "Assignement operator." << WHT << std::endl;
	delete [] this->vec;
	this->_max = s._max;
	this->vec = new std::vector<int>[this->_max]();
	for (unsigned int index = 0; index < _max; index++)
		this->vec[index] = s.vec[index]; 
	return (*this);
}

Span::~Span( void ){
	delete [] vec;
	std::cout << RED << "Delete Span" << WHT <<std::endl;
};

const char *Span::OutOfRange::what() const throw(){
	return ("Vector is full.");
}

const char *Span::NoNb::what() const throw(){
	return ("Vector have less than two numbers");
}
void Span::addNumber( int value )
{
	if (this->vec->size() == _max)
		return (throw Span::OutOfRange());
	else
		this->vec->push_back(value);
}

long long int Span::shortestSpan( void ){
	long long int shortspan = UINT_MAX;
	std::vector<int>::const_iterator begin = this->vec->begin();
	std::vector<int>::const_iterator end = this->vec->end();
	std::vector<int>::const_iterator comp;
	if (this->vec->size() <= 1)
		throw Span::NoNb();	
	for( begin = this->vec->begin(); begin != end; begin ++)
	{
		for ( comp = begin + 1; comp != end; comp ++)
		{
			if ( *begin > *comp)
			{
				if ( shortspan > *begin - *comp)
					shortspan = *begin - *comp;
			}
			else
			{
				if ( shortspan > *comp - *begin)
					shortspan = *comp - *begin;	
			}
		}
	}
	return (shortspan);
}

long long int Span::longestSpan( void ){
	int min = INT_MAX;
	int max = INT_MIN;
	unsigned int longspan;
	std::vector<int>::const_iterator begin = this->vec->begin();
	std::vector<int>::const_iterator end = this->vec->end();
	if (this->vec->size() <= 1)
		throw Span::NoNb();	
	for( begin = this->vec->begin(); begin != end; begin ++)
	{
		if (min > *begin)
			min = *begin;
		if (max < *begin)
			max = *begin;
	}
	if (min < 0 && max < 0)
		longspan = (-min) - (-max);
	else if (min < 0)
		longspan = (-min) + max;
	else 
		longspan = max - min;
	return (longspan);
}