/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:46:41 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 11:46:41 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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