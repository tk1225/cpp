#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(const Cat   &CatClass)
{
    std::cout<< "Cat copy constructor called" << std::endl;
    this->_brain = CatClass._brain;
    this->_brain = new Brain(*CatClass._brain);
}

Cat::~Cat( void )
{
    std::cout << this->_type << " destructor called" << std::endl;
    delete this->_brain;
}

Cat& Cat::operator=(const Cat &CatClass)
{
    std::cout<< "cat = called" << std::endl;
    if (this != &CatClass)
    {
        this->_type = CatClass._type;
        delete this->_brain;
        this->_brain = new Brain(*CatClass._brain);
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "nya" << std::endl;
}
