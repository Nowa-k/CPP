/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:18:48 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/02 14:18:48 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hpp/AForm.hpp"

AForm::AForm() : _name("Ramdom")
{
    _gradeRequierdToExec = 75;
    _gradeRequierdToSign = 75;
    _isSigned = false;
    //std::cout << GRN << "Default form is created" << std::endl;
}

AForm::AForm(std::string name, int gradeToExec, int gradeToSign, std::string target) : _name(name), _target(target)
{
    if (gradeToExec > 150 || gradeToSign > 150)
        throw AForm::GradeTooLowException();
    if (gradeToSign < 0 || gradeToSign < 0)
        throw AForm::GradeTooHighException();
    _gradeRequierdToExec = gradeToExec;
    _gradeRequierdToSign = gradeToSign;
    _isSigned = false;
   // std::cout << GRN << "Form is created" << std::endl;
}

AForm::AForm(const AForm &a)
{
    *this = a;
}

AForm &AForm::operator=(const AForm &a)
{
    if (this == &a)
        return (*this);
    this->_gradeRequierdToExec = a._gradeRequierdToExec;
    this->_gradeRequierdToSign = a._gradeRequierdToSign;
    (std::string&)this->_name = const_cast<std::string&>(a._name);
    this->_isSigned = a._isSigned;
    this->_lastSign = a._lastSign;
    return (*this); 
}

AForm::~AForm()
{
    //std::cout << RED << "Form is deleted" << std::endl; 
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Form : Grade to execute or to sign is to high.";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Form : Grade to execute or to sign is to low.";
}

void AForm::beSigned(const Bureaucrat &b)
{
    if (this->_isSigned == true)
    {
        std::cout << this->getName() << " is already signed" << std::endl;
        return; 
    }
    if (b.getGrade() <= _gradeRequierdToSign)
    {
        std::cout << b.getName() << " signed form." << std::endl;
        _isSigned = true;
    }
    else
    {
        std::cout << b.getName() << " can't signed form." << std::endl;
        _isSigned =  false;
    }
    setLastSign(b.getName());
}

void AForm::signedForm()
{
   if (_lastSign.empty())
        std::cout << "No people have try to sign this form." << std::endl;
    else if (_isSigned ==  true)
        std::cout << _lastSign << " signed " << _name << std::endl;
    else
        std::cout << _lastSign << " couldn't sign " << _name << " because grade is to low" << std::endl;
}

void AForm::setLastSign(std::string name)
{
    _lastSign = name;
}

std::string AForm::getLastSign(void) const
{
    return _lastSign;
}

std::string AForm::getName() const
{
    return _name;
}

bool AForm::getIsSigned() const
{
    return _isSigned;
}

int AForm::getGradeToExec( void ) const
{
    return _gradeRequierdToExec;
}

int AForm::getGradeToSign( void ) const
{
    return _gradeRequierdToSign;
}

std::string AForm::getTarget( void ) const
{
    return this->_target;
}

void AForm::setGradeExec(int exec)
{
    this->_gradeRequierdToExec = exec;
}

void AForm::setIsSigned(int is)
{
    this->_isSigned = is;
}

void AForm::setName(std::string name)
{
    (std::string&)this->_name = const_cast<std::string&>(name);
}

void AForm::setTarget(std::string target)
{
    this->_target = target;
}

void AForm::execute(const Bureaucrat &executor) const
{
    if (this->getIsSigned() == false)
        std::cout << this->getName() <<" isn't signed" << std::endl;
    else if (executor.getGrade() > this->getGradeToExec())
        std::cout << executor.getName() << " grade to low to execute." << std::endl;
    else
	   this->doWork(executor);
}

std::ostream &operator<<(std::ostream &out, const AForm &f)
{
    out << "Information : " << "The formulaire " << f.getName() << " grade to exec is " << f.getGradeToExec() <<
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
