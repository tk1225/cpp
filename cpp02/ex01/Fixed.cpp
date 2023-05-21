#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedNum(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) : _fixedNum(num << this->_fractionalBits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) : _fixedNum(static_cast<int>(roundf(num * (1<<this->_fractionalBits))))
{
    std::cout << "Float constructor called" << std::endl;
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
    return (this->_fixedNum);
}

void Fixed::setRawBits( int const raw )
{
    this->_fixedNum = raw;
}

float Fixed::toFloat( void )const
{
    float restored_f = static_cast<float>(this->_fixedNum) / (1 << this->_fractionalBits);
    return (restored_f);
}

int Fixed::toInt( void ) const
{
    int res = this->_fixedNum >> this->_fractionalBits;
    return(res);
}

//int constructor
   // std::bitset<32> bitset1(num);
    // std::cout << bitset1 << std::endl;
    // this->_fixedNum = num << this->_fractionalBits;
    // std::bitset<32> bitset2(_fixedNum);
    // std::cout << bitset2 << std::endl;

//float constructor
    // float tmp = num;
    // std::bitset<32> bitset1(*reinterpret_cast<unsigned int*>(&tmp));
    // std::cout << "num  8 :"<< bitset1 << std::endl;
    // std::bitset<32> bitset_tmp1((1<<this->_fractionalBits));
    // std::bitset<32> bitset_tmp2(num * (1<<this->_fractionalBits));
    // std::cout << "1 << 8 :" << bitset_tmp1 << std::endl;
    // std::cout << "num *8 :" << bitset_tmp2 << std::endl;
    // this->_fixedNum = static_cast<int>(roundf(num * (1<<this->_fractionalBits)));
    // std::bitset<32> bitset2(_fixedNum);
    // std::cout << "res< 8 :"<< bitset2 << std::endl;
