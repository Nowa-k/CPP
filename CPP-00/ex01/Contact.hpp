/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra < aleferra@student.42lyon.fr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:44:28 by aleferra          #+#    #+#             */
/*   Updated: 2022/07/19 11:22:14 by aleferra         ###   ########.fr       */
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

		void setFirstName(std::string first);
		void setLastName(std::string last);
		void setPhone(std::string phone);
		void setNickname(std::string nick);
		void setDarkest(std::string dark);

		std::string getFirstName();
		std::string getLastName();
		std::string getPhone();
		std::string getNickname();
		std::string getDarkest();
	
	private :
		std::string _firstname;
		std::string _lastname;
		std::string	_phonenumber;
		std::string _nickname;
		std::string	_darkestsecret;
};

#endif