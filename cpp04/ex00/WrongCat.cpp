#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->_type = "WrongCat";
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat   &WrongCatClass)
{
    *this = WrongCatClass;
}

WrongCat& WrongCat::operator=(const WrongCat &WrongCatClass)
{
    if (this != &WrongCatClass)
    {
        this->_type = WrongCatClass._type;
    }
    return *this;
}

WrongCat::~WrongCat( void )
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat nya" << std::endl;
}
