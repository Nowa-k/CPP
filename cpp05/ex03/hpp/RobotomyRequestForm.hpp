/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:20:01 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/02 14:20:02 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"


class RobotomyRequestForm : public AForm {
	public :
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string formName );
		RobotomyRequestForm( const RobotomyRequestForm &r );
		RobotomyRequestForm &operator= ( const RobotomyRequestForm &r );
		~RobotomyRequestForm( void );
		
		void doWork( Bureaucrat const &executor ) const;
};
#endif