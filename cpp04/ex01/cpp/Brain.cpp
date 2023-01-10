/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:48:47 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 10:48:47 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hpp/Brain.hpp"
#include "../hpp/Animal.hpp"

Brain::Brain()
{
    setAllideas(ideas);
    ideas[0] = "I'm angry";
    ideas[1] = "I have a idea";
    ideas[2] = "I need beer";
    std::cout << GRN << "Brain is created" << std::endl;
}

Brain::Brain ( const Brain &b)
{
    *this = b;
    std::cout << GRN << "Brain copie constructor" << std::endl;
}

Brain::~Brain()
{
    std::cout << RED << "Brain is delete" << std::endl;
}

Brain &Brain::operator= (const Brain &b)
{
    if (this == &b)
        return (*this);
    for (int i = 0; i < 100; i++)
        this->ideas[i] = b.ideas[i];
    std::cout << GRN << "Brain operator =" << std::endl;
    return *this;
}

void Brain::setNewIdea(std::string str)
{
    ideas[3] = str;
}

void Brain::setAllideas(std::string *ideas)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = "Nothing";
}

std::string Brain::getIdea(int value)
{
    return (ideas[value]);
}

void Brain::setIdea(int pos, std::string str)
{
    ideas[pos] = str;
}