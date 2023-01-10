/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:33:34 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 10:33:34 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;
    
    std::cout << WHT << "-----------------------------------------------" << std::endl;
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
