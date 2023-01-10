/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:44:28 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/07 13:12:45 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	public :
		Contact();
		~Contact();

		void setFirstName( std::string str);
		void setLastName( std::string str);
		void setPhoneNumber( std::string str);
		void setNickName( std::string str);
		void setDarkestSecret( std::string str);
		
		std::string getFirstName();
		std::string getLastName();
		std::string getPhoneNumber();
		std::string getNickName();
		std::string getDarkestSecret();

		int isPossible();
		
	private :
		std::string _firstname;
		std::string _lastname;
		std::string	_phonenumber;
		std::string _nickname;
		std::string	_darkestsecret;
};

#endif