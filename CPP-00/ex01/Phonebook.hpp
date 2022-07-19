/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra < aleferra@student.42lyon.fr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:46:37 by aleferra          #+#    #+#             */
/*   Updated: 2022/07/19 11:34:51 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
#include <string>
#include <cstdlib>
#include <iostream>
#define GRN "\e[0;32m"
#define NC "\e[0m"
#define RED "\e[0;31m"
#define BLU "\e[0;34m"

class Phonebook
{
	public :
		Phonebook();
		~Phonebook();

		Contact 	contact[8];
		int			count;
		int			strIsDigit(std::string str);
		void		search();
		void		pbExit();
		void		addContact();
		void		limitPrint(std::string str);
		std::string	completeBook(std::string str);
		std::string	completePhone(std::string str);
};

#endif