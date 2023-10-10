#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal malloc Default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal constructor called init type!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal delete Destructor called" << std::endl;
}

Animal::Animal(const Animal   &AnimalClass)
{
    *this = AnimalClass;
}

Animal& Animal::operator=(const Animal &AnimalClass)
{
    std::cout<< "animal = called" << std::endl;
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

void Animal::setType(std::string type)
{
    this->_type = type;
}

