#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal{
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