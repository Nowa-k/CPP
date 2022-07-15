#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    public :
    DiamondTrap();
    DiamondTrap( std::string name);
    DiamondTrap(const DiamondTrap &d);
    DiamondTrap &operator=( const DiamondTrap &d);
    ~DiamondTrap();

    void whoAmI();
    void attack(const std::string &target);
    
    private :
    std::string _name;
};