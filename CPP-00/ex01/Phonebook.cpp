/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:32:46 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/01 11:57:00 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <string>
#include <iostream>
#define GRN "\e[0;32m"
#define NC "\e[0m"
#define RED "\e[0;31m"
#define BLU "\e[0;34m"

Phonebook::Phonebook()
{
	count = 0;
	return ;
}

Phonebook::~Phonebook()
{
	return ;
}

int	Phonebook::strIsDigit(std::string str)
{
	int	i;

	i = 0;
	if (str.empty())
		return (0);
	while (str[i])
	{
		if (std::isdigit(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

std::string	Phonebook::completeBook(std::string str)
{
	std::string	info;

	info = "";
	std::cout << GRN << str << NC;
	std::getline(std::cin, info);
	if (std::cin.eof())
		exit(0);
	if (info.empty())
	{
		std::cout << RED << "NO empty line." << NC << std::endl;
		info = Phonebook::completeBook(str);			
	}
	return(info);
}

std::string	Phonebook::completePhone(std::string str)
{
	std::string	info;

	info = "";
	while (1)
	{
		std::cout << GRN << str << NC;
		std::getline(std::cin, info);
		if (std::cin.eof())
				exit(0);
		if (Phonebook::strIsDigit(info) == 1)
			break;
		else
			std::cout << RED << "Only number" << NC << std::endl;
			
	}
	return (info);
}

void Phonebook::limitPrint(std::string str)
{
	int	i;

	i = 0;
	while (i < 9 && str[i])
	{
		std::cout << str[i];
		i++;
	}
	if (str.length() > 9)
		std::cout << ".";
		
}

void	Phonebook::addContact()
{
	Contact contact;
	

	if (count > 7)
		count = 0;
	std::cout << GRN << "Take information of new contact" << std::endl; 
	contact.firstname = completeBook("First name : ");
	contact.lastname = completeBook("Last name : ");
	contact.phonenumber = completePhone("Phone number :");
	contact.nickname = completeBook("Nickname : ");
	contact.darkestsecret = completeBook("Darkest secret : ");

	Phonebook::contact[count] = contact;
	count++;
}

void	Phonebook::search()
{
	std::string index;
	int val;
	int pos;

	val = 0;
	while (!Phonebook::contact[val].firstname.empty() && val < 8)
	{
		std::cout << BLU << val + 1 << NC << " | ";
		Phonebook::limitPrint(Phonebook::contact[val].firstname);
		std::cout << " | ";
		Phonebook::limitPrint(Phonebook::contact[val].lastname);
		std::cout << " | ";
		Phonebook::limitPrint(Phonebook::contact[val].nickname);
		std::cout << std::endl;
		val++;
	}
	if (val == 0)
	{
		std::cout << RED << "Add contact" << NC;
		return ;
	}
	std::cout << GRN << "Choice index of contact : " << NC << std::endl;
	while (1)
	{
		std::getline(std::cin, index);
		if (std::cin.eof())
				exit(0);
		if (strIsDigit(index))
		{
			pos = stoi(index) - 1;
			if (pos > -1 && pos < val)
				break ;
			else
				std::cout << RED << "Valid index: " << NC << std::endl;	
		}
		else
			std::cout << RED << "Number : " << NC << std::endl;	
	}
	std::cout << BLU << "First name : " << NC << Phonebook::contact[pos].firstname << std::endl;
	std::cout << BLU << "Last name : " << NC << Phonebook::contact[pos].lastname << std::endl;
	std::cout << BLU << "Phone number : " << NC << Phonebook::contact[pos].phonenumber << std::endl;
	std::cout << BLU << "Nickname : " << NC << Phonebook::contact[pos].nickname << std::endl;
	std::cout << BLU << "Darkest secret : " << NC << Phonebook::contact[pos].darkestsecret << std::endl;
}

void	Phonebook::pbExit()
{
	std::cout << "Phonebook is closed." << std::endl;
	exit(0);
}
