#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"


int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());

    ICharacter* bob = new Character("bob");
    ICharacter* me = new Character("me");
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);   
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->unequip(1);
    tmp = src->createMateria("cure");
    me->equip(tmp);   
    
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);

    delete src;   
    delete bob;
    delete me;
    return 0;
}