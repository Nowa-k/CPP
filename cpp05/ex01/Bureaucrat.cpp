/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:11:37 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/02 14:11:37 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Random"), _grade(75)
{
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade = grade;
   // std::cout << GRN << "Bureaucrat is created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
    *this = b;
}

Bureaucrat::~Bureaucrat()
{
  //std::cout << RED << "Bureaucrat is deleted" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
    if (this == &b)
        return (*this);
    this->_grade = b._grade;
    (std::string&)this->_name = const_cast<std::string&>(b._name);
    return *this;
}

std::string Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void Bureaucrat::increment()
{
    if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade -= 1;
}

void Bureaucrat::decrement()
{
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade += 1;
}

const char *Bureaucrat::GradeTooHighException::what() const  throw()
{
    return ("Bureaucrat grade assign is to low.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat grade assign is to high.");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return out;
}

void Bureaucrat::signForm( Form &f )
{
    f.beSigned(*this);
    if (f.getIsSigned() == 1)
        std::cout << f.getLastSign() << " signed " << f.getName() << std::endl;
    else
    {
        if (!f.getLastSign().empty())
            std::cout <<f.getLastSign() << " couldn't signed " << f.getName() << " because grade is to low." << std::endl;
        else
            std::cout << "Nobody try to sign " << f.getName() << std::endl;
    }
}