#include "Form.hpp"

Form::Form() :_name("Ramdom")
{
    _gradeRequierdToExec = 75;
    _gradeRequierdToSign = 75;
    _isSigned = false;
    std::cout << GRN << "Default form is created" << std::endl;
}

Form::Form(std::string name, int gradeToExec, int gradeToSign) : _name(name)
{
    _gradeRequierdToExec = gradeToExec;
    _gradeRequierdToSign = gradeToSign;
    _isSigned = false;
    std::cout << GRN << "Form is created" << std::endl;
}

Form::~Form()
{
    std::cout << RED << "Form is deleted" << std::endl; 
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade Form to High";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade Form to low";
}

void Form::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() <= _gradeRequierdToSign)
        _isSigned = true;
    else
        throw Form::GradeTooLowException();
    _lastSign = b.getName();
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

std::string Form::getName() const
{
    return _name;
}

bool Form::getIsSigned() const
{
    return _isSigned;
}

std::ostream &operator<<(std::ostream &out, const Form &f)
{
    if (f.getIsSigned() == true)
        out << f.getName() << " is signed" << std::endl;
    else
        out << f.getName() << " isn't signed" << std::endl;

    return out;
}
