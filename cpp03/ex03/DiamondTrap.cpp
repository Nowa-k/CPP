#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Diamond_Clap", 100, 50, 30), _name("Diamond")
{
    std::cout << GRN << "DiamondTrap constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_Clap", 100, 50, 30), _name(name)
{
    std::cout << GRN << "DiamondTrap constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &d)
{
    _name = d._name;
    _HitPoint = d._HitPoint;
    _EnergyPoint =  d._EnergyPoint;
    _AttackDamage =  d._AttackDamage;
    std::cout << GRN << "DiamondTrap copie constructor is called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << RED << "DiamondTrap destructor is called" << std::endl;
}

DiamondTrap &DiamondTrap::operator= (const DiamondTrap &d)
{
    std::cout << GRN << "Operator = is called" << std::endl;
	this->_name = d._name;
    this->_AttackDamage = d._AttackDamage;
    this->_EnergyPoint = d._EnergyPoint;
    this->_HitPoint = d._HitPoint;
	return (*this);
}

void DiamondTrap::whoAmI()
{
    std::cout << WHT << "DiamondTrap name is " << _name << " and Claptrap name is " << ClapTrap::getName() <<std::endl;  
}