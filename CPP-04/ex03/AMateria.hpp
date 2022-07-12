#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "Color.hpp"


class ICharacter;

class AMateria
{
	protected:

		std::string _type;

	public:
	
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const &copy);
		virtual ~AMateria();
		AMateria &operator=(AMateria const &assignation);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};

#endif