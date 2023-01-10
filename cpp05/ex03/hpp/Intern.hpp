/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:19:55 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/02 14:19:56 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;

class Intern{
	public :
		Intern( void );
		Intern(const Intern &i);
		~Intern( void );
		Intern &operator=(const Intern &i);

		AForm *makeForm( std::string request, std::string target );
		AForm *requestRobo( std::string target );
		AForm *requestPres( std::string target );
		AForm *requestShrum( std::string target );

		class FormNull : public std::exception
		{
			public:
				virtual const char* what () const throw();
		};
};
#endif 