/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:46:39 by aleferra          #+#    #+#             */
/*   Updated: 2022/10/04 11:46:39 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
#include "AAnimal.hpp"

class Brain {
    public :
        Brain();
        Brain(const Brain &b);
        Brain &operator=(const Brain &b);
        ~Brain();

        void setNewIdea(std::string str);
        void setAllideas(std::string *ideas);
        void setIdea(int pos, std::string str);
        std::string getIdea(int val);
    private :
        std::string ideas[100];
};

#endif