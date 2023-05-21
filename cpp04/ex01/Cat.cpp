#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
}

Cat::Cat(const Cat   &CatClass)
{
    this->_brain = CatClass._brain;
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
