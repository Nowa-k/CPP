#include "Cat.hpp"
#include "Dog.hpp"
#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    //const AAnimal *e = new AAnimal();
    //AAnimal test;
    const Cat *c = new Cat();
    const Dog *d = new Dog();

    delete c;
    delete d;
    return 0;
}
