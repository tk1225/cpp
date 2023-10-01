#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->_type = "Cat";
}

Cat::Cat(const Cat   &CatClass)
{
    this->_brain = CatClass._brain;
}

Cat::~Cat( void )
{
    std::cout << this->_type << " destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &CatClass)
{
    Animal::operator=(CatClass);
    std::cout<< "cat = called" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "nya" << std::endl;
}
