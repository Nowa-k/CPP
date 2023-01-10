/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:18:31 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/02 14:18:31 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    public :
        AForm();
        AForm(std::string name, int gradeToExec, int gradeToSign, std::string target);
        AForm(const AForm &f);
        virtual ~AForm();
        AForm &operator=(const AForm &f);
        
        virtual void signedForm(); // regarde si le form est signé
        virtual void beSigned(const Bureaucrat &b); // signe le formulaire

        virtual std::string getLastSign( void ) const;
        virtual bool getIsSigned() const;
        virtual std::string getName() const;
        virtual int getGradeToExec() const;
        virtual int getGradeToSign() const;
        virtual std::string getTarget() const;

        virtual void setLastSign(std::string exemple);
        virtual void setGradeExec(int exec);
        virtual void setName(std::string name);
        virtual void setIsSigned(int is);
        virtual void setTarget(std::string target);

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
        
        virtual void doWork(Bureaucrat const &executor) const = 0;
        virtual void execute(Bureaucrat const &executor) const;

    private :
        std::string _lastSign;
        const std::string _name;
        bool _isSigned;
        int _gradeRequierdToSign;
        int _gradeRequierdToExec;
        std::string _target;
        
};

std::ostream &operator<<( std::ostream &out, const AForm &f);

# endif
