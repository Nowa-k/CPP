#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public :
        WrongCat();
        WrongCat( const WrongCat &c );
        ~WrongCat();
        WrongCat &operator=(const WrongCat &w );

        void makeSound() const;

    protected :
        std::string _type;
};

# endif