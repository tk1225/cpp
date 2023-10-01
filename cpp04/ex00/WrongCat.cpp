#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->_type = "WrongCat";
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongCat::~WrongCat( void )
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat nya" << std::endl;
}
