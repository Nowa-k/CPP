/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:48:40 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 10:48:40 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hpp/Cat.hpp"
#include "../hpp/Dog.hpp"
#include "../hpp/Animal.hpp"
#include "../hpp/WrongAnimal.hpp"
#include "../hpp/WrongCat.hpp"

int main()
{
    std::cout << CYN << "-----------------Base------------------" << WHT << std::endl;
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

    }
    std::cout << CYN << "-----------------Operator =------------------" << WHT << std::endl;
	{
        Dog basic;
		Dog tmp;
        tmp = basic;
        basic.newIdea("Love et love");
        basic.think(3);
        tmp.think(3);
        basic.newIdea("Crash?");
        std::cout << "Basic think : ";
        basic.think(3);
        std::cout << "Tmp think : "; 
        tmp.think(3);
	}

    std::cout << CYN << "-----------------Copie constructor------------------" << WHT << std::endl;
	{
        Cat basic;
        basic.newIdea("Love et love");
		Cat tmp = basic;
        tmp = basic;
        basic.think(3);
        tmp.think(3);
        basic.newIdea("Crash?");
        tmp.newIdea("No leaks ?");
        std::cout << "Basic think : ";
        basic.think(3);
        std::cout << "Tmp think : "; 
        tmp.think(3);
	}

    return 0;
}
