#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define WHT "\e[0;37m"

class Animal
{
    public :
        Animal();
        Animal(const Animal &a);
        virtual ~Animal();
        Animal &operator=(const Animal &a);
        
        virtual void makeSound() const;
        std::string getType() const;

    protected :
        std::string _type;
};

#endif