#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    std::cout << this->_type << " constructor called" << std::endl;
}

Cat::Cat(const Cat   &CatClass)
{
    *this = CatClass;
}

Cat& Cat::operator=(const Cat &CatClass)
{
    if (this != &CatClass)
    {
        this->_type = CatClass._type;
    }
    return *this;
}

Cat::~Cat( void )
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "nya" << std::endl;
}
