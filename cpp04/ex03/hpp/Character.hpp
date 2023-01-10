/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:22:57 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 12:22:57 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "Color.hpp"


class Character : public ICharacter
{
    private :
        AMateria *equipement[4];
        AMateria *_unequipemat[4];

    public :
        Character();
        Character(std::string name);
        Character(const Character &c);
        ~Character();
        Character &operator=(const Character &c);

        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif 