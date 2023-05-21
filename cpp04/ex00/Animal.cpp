#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
}

Animal::~Animal()
{
    std::cout << "Destructor called" << std::endl;
}

Animal::Animal(const Animal   &AnimalClass)
{
    *this = AnimalClass;
}

Animal& Animal::operator=(const Animal &AnimalClass)
{
    if (this != &AnimalClass)
    {
        this->_type = AnimalClass._type;
    }
    return *this;
}

void Animal::makeSound() const
{
    std::cout << this->_type << "sound" << std::endl;
}

std::string Animal::getType() const
{
    return (this->_type);
}

