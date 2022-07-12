#ifndef CURE_HPP
# define CURE_HPP

#include "Amateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(std::string type);
        ~Cure();

        AMateria *clone() const;
        void use(ICharacter &target);
};
#endif 