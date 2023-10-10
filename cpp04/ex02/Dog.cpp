#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    this->_type = "dog";
    this->_brain = new Brain();
}

Dog::Dog(const Dog   &DogClass)
{
    std::cout<< "Dog copy constructor called" << std::endl;
    this->_brain = new Brain(*DogClass._brain);
}

Dog::~Dog( void )
{
    std::cout << this->_type << " destructor called" << std::endl;
    delete this->_brain;
}

Dog& Dog::operator=(const Dog &DogClass)
{
    std::cout<< "Dog = called" << std::endl;
    if (this != &DogClass)
    {
        this->_type = DogClass._type;
        delete this->_brain;
        this->_brain = new Brain(*DogClass._brain);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout<< "one" << std::endl;
}
