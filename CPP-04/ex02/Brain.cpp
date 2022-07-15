#include "Brain.hpp"
#include "AAnimal.hpp"

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
    std::cout << GRN << "Constructeur de recopie" << std::endl;
}

Brain::~Brain()
{
    std::cout << RED << "Brain is delete" << std::endl;
}

Brain &Brain::operator= (const Brain &b)
{
    *this = b;
    std::cout << GRN << "Operator d'affection" << std::endl;
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