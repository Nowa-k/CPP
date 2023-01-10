/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:23:07 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 12:23:07 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(std::string type);
        Ice ( const Ice &i);
        ~Ice();
        Ice &operator=( const Ice &i);

        AMateria *clone() const;
        void use(ICharacter &target);
};
#endif 