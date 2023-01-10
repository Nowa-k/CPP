/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:46:37 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 11:46:37 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define WHT "\e[0;37m"

class AAnimal
{
    public :
        virtual ~AAnimal();
        
        virtual void makeSound() const = 0;
        std::string getType() const;

    protected :
        AAnimal();
        AAnimal(const AAnimal &a);
        AAnimal &operator=(const AAnimal &a);
        std::string _type;
};

#endif