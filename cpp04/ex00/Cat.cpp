#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    std::cout << this->_type << " constructor called" << std::endl;
}

Cat::~Cat( void )
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "nya" << std::endl;
}
