#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal constructor called init type!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
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

