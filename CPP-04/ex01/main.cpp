#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta[10];
    for (int i = 0; i < 5; i++)
        meta[i] = new Cat();
    for (int i = 5; i < 10; i++)
        meta[i] = new Dog();
    
    for (int i = 0; i < 10; i++)
    {
        std::cout << WHT << meta[i]->getType() << std::endl;
        delete meta[i];
    }
    const Cat *c = new Cat;
    const Dog *d = new Dog;

    c->newIdea("Is better idea");
    c->think(3);
    d->newIdea("Bad idea");
    d->think(3);
    delete c;
    delete d;

    Dog basic;
	{
        basic.newIdea("Love et love");
        basic.think(3);
		Dog tmp = basic;
        tmp.think(3);
        basic.newIdea("Crash?");
        basic.think(3);
        tmp.think(3);
	}


    return 0;
}
