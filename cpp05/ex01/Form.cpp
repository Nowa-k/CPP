/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:19:17 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/02 14:19:17 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Ramdom"), _gradeRequierdToExec(75), _gradeRequierdToSign(75)
{
    _isSigned = false;
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _gradeRequierdToExec(gradeToExec), _gradeRequierdToSign(gradeToSign)
{
    if (gradeToExec > 150 || gradeToSign > 150)
        throw Form::GradeTooLowException();
    if (gradeToSign < 0 || gradeToSign < 0)
        throw Form::GradeTooHighException();
    _isSigned = false;
}

Form::Form(const Form &f)  : _name(f.getName()), _gradeRequierdToExec(f.getGradeToExec()), _gradeRequierdToSign(f.getGradeToSign())
{
    *this = f;
}

Form::~Form()
{
    //std::cout << RED << "Form is deleted" << std::endl; 
}

Form &Form::operator=(const Form &f)
{
    if (this == &f)
        return (*this);
    (int&)this->_gradeRequierdToExec = const_cast<int&>(f._gradeRequierdToExec);
    (int&)this->_gradeRequierdToSign = const_cast<int&>(f._gradeRequierdToSign);
    this->_isSigned = f._isSigned;
    this->_lastSign = f._lastSign;
    (std::string&)this->_name = const_cast<std::string&>(f._name);
    return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Form : Grade to execute or to sign is to high.";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Form : Grade to execute or to sign is to low.";
}

void Form::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() <= _gradeRequierdToSign)
        _isSigned = true;
    else
        _isSigned =  false;
    setLastSign(b.getName());
}

void Form::signedForm()
{
    if (_lastSign.empty())
        std::cout << "No people have try to sign this form." << std::endl;
    else if (_isSigned ==  true)
        std::cout << _lastSign << " signed " << _name << std::endl;
    else
        std::cout << _lastSign << " couldn't sign " << _name << " because grade is to low" << std::endl;
}


void Form::setLastSign(std::string name)
{
    _lastSign = name;
}

void Form::setGradeToExec(int val)
{
    (int&)this->_gradeRequierdToExec = const_cast<int&>(val);
}

void Form::setGradeToSign(int val)
{
    (int&)this->_gradeRequierdToSign = const_cast<int&>(val);
}

std::string Form::getLastSign(void) const
{
    return _lastSign;
}

std::string Form::getName() const
{
    return _name;
}

bool Form::getIsSigned() const
{
    return _isSigned;
}

int Form::getGradeToExec( void ) const
{
    return _gradeRequierdToExec;
}

int Form::getGradeToSign( void ) const
{
    return _gradeRequierdToSign;
}

std::ostream &operator<<(std::ostream &out, const Form &f)
{
    out << "Information : " <<"The formulaire " << f.getName() << " grade to exec is " << f.getGradeToExec() <<
    " and grade to sign " << f.getGradeToSign() << std::endl;
    if (f.getIsSigned() == true)
        out << "Form is signed by " << f.getLastSign() << std::endl;
    else
        if (!f.getLastSign().empty())
            out << "Form isn't signed by " << f.getLastSign() << " because grade to low" << std::endl;
        else
            out << "Form " << f.getName() << " isn't signed." << std::endl;
    return out;
}
