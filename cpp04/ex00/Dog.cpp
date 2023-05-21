#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "dog";
}

void Dog::makeSound() const
{
    std::cout<< "one" << std::endl;
}
