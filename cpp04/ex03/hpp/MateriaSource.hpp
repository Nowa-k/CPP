/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:23:16 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 12:23:16 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
    public :
        MateriaSource();
        MateriaSource(const MateriaSource &m);
        ~MateriaSource();
        MateriaSource &operator=(const MateriaSource &m);
        
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);

    private :
        AMateria *tabMateria[4];
};

#endif