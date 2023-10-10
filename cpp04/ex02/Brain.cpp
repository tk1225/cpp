#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain   &BrainClass)
{
    std::cout<< "brain copy constructor called" << std::endl;
    *this = BrainClass;
}

Brain& Brain::operator=(const Brain &BrainClass)
{
    std::cout<< "brain = called" << std::endl;
    int i = 0;

    if (this != &BrainClass)
    {
        while (i < 100)
        {
            this->_ideas[i] = BrainClass._ideas[i];
            i ++;
        }
    }
    return *this;
}

void Brain::setIdea(int index, std::string content)
{
    this->_ideas[index] = content;
}

std::string Brain::getIdea(int index)
{
    return this->_ideas[index];
}


