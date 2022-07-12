#include "AMateria.hpp"

AMateria::AMateria() : _type("default")
{
    std::cout << GRN << "Amateria is created" << std::endl;
	return ;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << GRN << "Amateria is created" << std::endl;
	return ;
}

AMateria::~AMateria()
{
    std::cout << RED << "Amateria is deleted" << std::endl;
	return ;
}

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
    std::cout << GRN << "Amateria copy is created" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const &copy)
{
	this->_type = copy._type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}