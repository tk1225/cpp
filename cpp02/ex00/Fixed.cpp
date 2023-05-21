#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedNum = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed   &fixedClass)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_fixedNum = fixedClass.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &fixedClass)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixedClass)
        this->_fixedNum = fixedClass.getRawBits();
    return *this;
}

int Fixed::getRawBits( void )const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedNum);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedNum = raw;
}
