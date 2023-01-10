/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:28:06 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/07 13:15:06 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#include <iostream>


Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void	Contact::setFirstName(std::string str)
{
	_firstname = str;
}

void	Contact::setLastName(std::string str)
{
	_lastname = str;
}

void	Contact::setPhoneNumber(std::string str)
{
	_phonenumber = str;
}

void	Contact::setNickName(std::string str)
{
	_nickname = str;
}

void	Contact::setDarkestSecret(std::string str)
{
	_darkestsecret = str;
}

std::string Contact::getFirstName( void )
{
	return _firstname;
}

std::string Contact::getLastName( void )
{
	return _lastname;
}

std::string Contact::getPhoneNumber( void )
{
	return _phonenumber;
}

std::string Contact::getNickName( void )
{
	return _nickname;
}

std::string Contact::getDarkestSecret( void )
{
	return _darkestsecret;
}

int Contact::isPossible( void )
{
	if (_firstname.empty())
		return 0;
	return 1;
}