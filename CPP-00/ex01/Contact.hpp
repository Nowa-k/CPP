/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:44:28 by aleferra          #+#    #+#             */
/*   Updated: 2022/05/27 16:02:00 by aleferra         ###   ########.fr       */
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
		
		std::string firstname;
		std::string lastname;
		std::string	phonenumber;
		std::string nickname;
		std::string	darkestsecret;
};

#endif