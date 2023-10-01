#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<string>
#include<iostream>

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(const Brain   &BrainClass);
        Brain& operator=(const Brain &BrainClass);
        void setIdea(int index, std::string content);
        std::string getIdea(int index);
        ~Brain();
};

#endif
