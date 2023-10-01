#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    this->_type = "dog";
}

Dog::Dog(const Dog   &DogClass)
{
    // this->_brain = DogClass._brain;
    this->_brain = new Brain(*DogClass._brain);
}

Dog::~Dog( void )
{
    std::cout << this->_type << " destructor called" << std::endl;
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
