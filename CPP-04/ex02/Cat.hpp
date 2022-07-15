#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
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