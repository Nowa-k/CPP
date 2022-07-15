#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal{
    public :
        Dog();
        Dog( const Dog &d );
        virtual ~Dog();
        Dog &operator=(const Dog &d);

        void makeSound() const;
        void newIdea(std::string str) const;
        void think(int value) const;
        std::string copieThink(int value) const;
    
    private :
        Brain *bigbrain;
};

# endif