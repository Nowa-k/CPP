#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    public :
        Cat();
        Cat( const Cat &c );
        ~Cat();
        Cat &operator=(const Cat &c);

        void makeSound() const;
        void newIdea(std::string) const;
        void think(int value) const;
    
    private :
        Brain *bigbrain;
};

# endif