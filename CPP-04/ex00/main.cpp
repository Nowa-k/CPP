#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << WHT << j->getType() << " " << std::endl;
    std::cout << WHT << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;
    

    const WrongAnimal* nothing = new WrongAnimal();
    const WrongAnimal* Wc = new WrongCat();

    std::cout << WHT << nothing->getType() << " " << std::endl;
    nothing->makeSound();
    std::cout << WHT << Wc->getType() << " " << std::endl;
    Wc->makeSound();

    delete nothing;
    delete Wc;
    return 0;
}
