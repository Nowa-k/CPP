#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form {
    public :
        Form();
        Form(std::string name, int gradeToExec, int gradeToSign);
        Form(const Form &f);
        virtual ~Form();
        Form &operator=(const Form &f);

        std::string getName() const;
        bool getIsSigned() const;
        void beSigned(const Bureaucrat &b);
        void signedForm();

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
        int _gradeRequierdToSign;
        int _gradeRequierdToExec;
        
};

std::ostream &operator<<( std::ostream &out, const Form &f);

# endif
