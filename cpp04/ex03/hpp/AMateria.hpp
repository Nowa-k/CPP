/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:22:52 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 12:22:52 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		AMateria &operator=(AMateria const &copy);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};

#endif