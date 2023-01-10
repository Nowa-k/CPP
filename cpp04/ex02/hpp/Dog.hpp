/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:46:43 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 11:46:43 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal{
    public :
        Dog();
        Dog( const Dog &d );
        virtual ~Dog();
        Dog &operator=(const Dog &d);

        void makeSound() const;
        void newIdea(std::string str) const;
        void think(int value) const;
        std::string copieThink(int value) const;
    
    private :
        Brain *bigbrain;
};

# endif