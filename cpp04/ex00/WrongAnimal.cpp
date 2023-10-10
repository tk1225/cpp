#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Wrong Animal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "Wrong Animal constructor called init type!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal   &WrongAnimalClass)
{
    *this = WrongAnimalClass;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &WrongAnimalClass)
{
    if (this != &WrongAnimalClass)
    {
        this->_type = WrongAnimalClass._type;
    }
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << this->_type << "sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}

