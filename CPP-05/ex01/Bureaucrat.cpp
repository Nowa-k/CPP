#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    if (grade < 0)
        throw Bureaucrat::GradeTooLowException();
    _grade = grade;
    std::cout << GRN << "Bureaucrat is created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
    *this = b;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << RED << "Bureaucrat is deleted" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
    this->_grade = b.getGrade();
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
    if (this->_grade - 1 < 0)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade -= 1;
}

void Bureaucrat::decrement()
{
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade += 1;
}

const char *Bureaucrat::GradeTooHighException::what() const  throw()
{
    return ("Grade Bureaucrat to high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade Bureaucrat to low");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return out;
}