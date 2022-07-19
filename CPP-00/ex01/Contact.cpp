/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra < aleferra@student.42lyon.fr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:28:06 by aleferra          #+#    #+#             */
/*   Updated: 2022/07/19 11:23:45 by aleferra         ###   ########.fr       */
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

void Contact::setFirstName(std::string first)
{
	_firstname = first;
}

void Contact::setLastName(std::string last)
{
	_lastname = last;
}

void Contact::setPhone(std::string phone)
{
	_phonenumber = phone;
}

void Contact::setNickname(std::string nick)
{
	_nickname = nick;
}

void Contact::setDarkest(std::string dark)
{
	_darkestsecret = dark;
}


std::string Contact::getFirstName()
{
	return _firstname;
}

std::string Contact::getLastName()
{
	return _lastname;
}

std::string Contact::getPhone()
{
	return _phonenumber;
}

std::string Contact::getNickname()
{
	return _nickname;
}

std::string Contact::getDarkest()
{
	return _darkestsecret;
}

	