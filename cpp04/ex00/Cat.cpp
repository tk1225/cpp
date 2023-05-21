#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
}

void Cat::makeSound() const
{
    std::cout << "nya" << std::endl;
}
