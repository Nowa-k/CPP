#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

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