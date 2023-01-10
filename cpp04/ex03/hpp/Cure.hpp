/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:23:05 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 12:23:05 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(std::string type);
        Cure(const Cure &c);
        ~Cure();
        Cure &operator=(const Cure &c);

        AMateria *clone() const;
        void use(ICharacter &target);
};
#endif 