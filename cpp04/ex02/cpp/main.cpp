/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:45:58 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 11:45:58 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hpp/Cat.hpp"
#include "../hpp/Dog.hpp"
#include "../hpp/AAnimal.hpp"
#include "../hpp/WrongAnimal.hpp"
#include "../hpp/WrongCat.hpp"

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
