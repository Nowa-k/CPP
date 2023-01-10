/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:19:20 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/02 14:19:20 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    public :
        Form();
        Form(std::string name, int gradeToSign, int gradeToExec);
        Form(const Form &f);
        virtual ~Form();
        Form &operator=(const Form &f);

        void beSigned(const Bureaucrat &b);
        void signedForm();
        void setLastSign(std::string exemple);
        void setGradeToExec(int value);
        void setGradeToSign(int value);

        std::string getLastSign( void ) const;
        bool getIsSigned() const;
        std::string getName() const;
        int getGradeToExec() const;
        int getGradeToSign() const;

        class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what () const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what () const throw();
		};

    private :
        std::string _lastSign;
        const std::string _name;
        bool _isSigned;
        const int _gradeRequierdToSign;
        const int _gradeRequierdToExec;
        
};

std::ostream &operator<<( std::ostream &out, const Form &f);

# endif
