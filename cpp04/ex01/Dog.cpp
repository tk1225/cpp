#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "dog";
}

Dog::Dog(const Dog   &DogClass)
{
    this->_brain = DogClass._brain;
}

Dog& Dog::operator=(const Dog &DogClass)
{
    Animal::operator=(DogClass);
    std::cout<< "dog = called" << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout<< "one" << std::endl;
}
