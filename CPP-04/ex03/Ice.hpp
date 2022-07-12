#ifndef ICE_HPP
# define ICE_HPP

#include "Amateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(std::string type);
        ~Ice();

        AMateria *clone() const;
        void use(ICharacter &target);
};
#endif 