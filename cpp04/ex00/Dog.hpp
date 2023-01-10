/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:33:31 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 10:33:31 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal{
    public :
        Dog();
        Dog( const Dog &c );
        ~Dog();
        Dog &operator=(const Dog &c);

        void makeSound() const;
};

# endif