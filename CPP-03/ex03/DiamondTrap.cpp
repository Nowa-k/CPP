#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Hobbit"), _name("Hobbit")
{
    _HitPoint = 100;
    _EnergyPoint = 50;
    _AttackDamage = 30;
    std::cout << GRN << "DiamondTrap constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_Clap"), _name(name)
{
    _HitPoint = 100;
    _EnergyPoint = 50;
    _AttackDamage = 30;
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
	this->_name = d._name;
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << WHT << "DiamondTrap name is " << _name << " and Claptrap name is " << ClapTrap::getName() <<std::endl;  
}