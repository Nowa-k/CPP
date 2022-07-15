#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal{
    public :
        Dog();
        Dog( const Dog &c );
        ~Dog();
        Dog &operator=(const Dog &c);

        void makeSound() const;
};

# endif