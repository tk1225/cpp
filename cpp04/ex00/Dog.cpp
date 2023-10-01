#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "dog";
    std::cout << this->_type << " constructor called" << std::endl;
}

Dog::~Dog( void )
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout<< "one" << std::endl;
}
