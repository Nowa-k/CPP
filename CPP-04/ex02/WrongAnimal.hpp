#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>
# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define WHT "\e[0;37m"

class WrongAnimal
{
    public :
        WrongAnimal();
        WrongAnimal(const WrongAnimal &a);
        ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &a);
        
        void makeSound() const;
        std::string getType() const;

    protected :
        std::string _type;
};

#endif