/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:18:27 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/02 14:18:28 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	public :
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string formName );
		PresidentialPardonForm( const PresidentialPardonForm &r );
		PresidentialPardonForm &operator= ( const PresidentialPardonForm &r );
		~PresidentialPardonForm( void );
		
		void doWork( Bureaucrat const &executor ) const;
};
#endif