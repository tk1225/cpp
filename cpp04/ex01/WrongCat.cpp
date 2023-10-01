#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Wrong Cat Default constructor called" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::~WrongCat( void )
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "nya" << std::endl;
}
