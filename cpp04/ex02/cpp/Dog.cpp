/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:48:42 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 10:48:42 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../hpp/Dog.hpp"
# include "../hpp/Brain.hpp"

Dog::Dog ()
{
    _type = "Dog";
    bigbrain = new Brain;
    std::cout << GRN << "Dog is created" << std::endl;
}

Dog::Dog (const Dog &d)
{
    this->_type = d._type;
    this->bigbrain = new Brain();
    for(int i = 0; i < 100 ; i++)
        this->bigbrain->setIdea(i, d.bigbrain->getIdea(i));
    std::cout << GRN << "Dog Copie is created" << std::endl;
}

Dog::~Dog ()
{
    delete bigbrain;
    std::cout << RED << "Dog is deleted" << std::endl;
}

Dog &Dog::operator=( const Dog &c)
{
    if (this == &c)
        return (*this);
    std::cout << GRN << "Dog operator =." << WHT << std::endl;
    this->_type = c._type;
    for(int i = 0; i < 100 ; i++)
        this->bigbrain->setIdea(i, c.bigbrain->getIdea(i));
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << WHT << "Ouaf Ouaf" << std::endl;
}


void Dog::think(int value) const
{
    std::cout << WHT << bigbrain->getIdea(value) << std::endl;
}

void Dog::newIdea(std::string str) const
{
    bigbrain->setNewIdea(str);
}