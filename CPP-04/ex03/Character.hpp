#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "Color.hpp"


class Character : public ICharacter
{
    private :
        AMateria *equipement[4];

    public :
        Character();
        Character(std::string name);
        ~Character();

        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif 