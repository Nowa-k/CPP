# include "Dog.hpp"
# include "Brain.hpp"

Dog::Dog ()
{
    _type = "Dog";
    bigbrain = new Brain;
    std::cout << GRN << "Dog is created" << std::endl;
}

Dog::Dog (const Dog &d) : AAnimal()
{
    this->_type = d._type;
    this->bigbrain = new Brain();
    for(int i = 0; i < 100 ; i++)
        this->bigbrain->setIdea(i, d.bigbrain->getIdea(i));
    std::cout << GRN << "Dog Copie is created" << std::endl;
    *this = d;
}

Dog::~Dog ()
{
    delete bigbrain;
    std::cout << RED << "Dog is deleted" << std::endl;
}

Dog &Dog::operator=( const Dog &c)
{
    this->_type = c._type;
    return *this;
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