/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:46:37 by aleferra          #+#    #+#             */
/*   Updated: 2022/05/31 17:50:05 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>

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