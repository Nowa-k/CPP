/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:48:15 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 10:48:15 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../hpp/Cat.hpp"
# include "../hpp/Brain.hpp"

Cat::Cat ()
{
    _type = "Cat";
    bigbrain = new Brain();
    std::cout << GRN << "Cat is created" << std::endl;
}

Cat::Cat (const Cat &c)
{
    this->_type = c._type;
    this->bigbrain = new Brain();
    for (int i = 0; i < 100; i++)
        this->bigbrain->setIdea(i, c.bigbrain->getIdea(i));
    std::cout << GRN << "Cat copie is created" << std::endl;
}

Cat::~Cat ()
{
    delete bigbrain;
    std::cout << RED << "Cat is deleted" << WHT << std::endl;
}

Cat &Cat::operator=( const Cat &c)
{
    if (this == &c)
        return (*this);
    std::cout << GRN << "Cat operator =." << WHT << std::endl;
    this->_type = c._type;
    for(int i = 0; i < 100 ; i++)
        this->bigbrain->setIdea(i, c.bigbrain->getIdea(i));
    return *this;
}

void Cat::makeSound() const
{
    std::cout << WHT << "Miaouw Miaouw" << std::endl;
}

void Cat::think(int value) const
{
    std::cout << WHT << bigbrain->getIdea(value) << std::endl;
}

void Cat::newIdea(std::string str) const
{
    bigbrain->setNewIdea(str);
}