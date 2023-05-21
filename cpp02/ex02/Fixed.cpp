#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedNum(0)
{
}

Fixed::Fixed(const int num) : _fixedNum(num << this->_fractionalBits)
{
}

Fixed::Fixed(const float num) : _fixedNum(static_cast<int>(roundf(num * (1<<this->_fractionalBits))))
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed   &fixedClass)
{
    this->_fixedNum = fixedClass.getRawBits();
}

Fixed& Fixed::operator+(const Fixed &fixedClass)
{
    this->_fixedNum += fixedClass.getRawBits();
    return *this;
}

Fixed& Fixed::operator-(const Fixed &fixedClass)
{
    this->_fixedNum -= fixedClass.getRawBits();
    return *this;
}

Fixed& Fixed::operator*(const Fixed &fixedClass)
{
    float num = this->toFloat() * fixedClass.toFloat();
    this->_fixedNum = static_cast<int>(roundf(num * (1<<this->_fractionalBits)));
    return *this;
}

Fixed& Fixed::operator/(const Fixed &fixedClass)
{
    float num = this->toFloat() / fixedClass.toFloat();
    this->_fixedNum = static_cast<int>(roundf(num * (1<<this->_fractionalBits)));
    return *this;
}

Fixed& Fixed::operator=(const Fixed &fixedClass)
{
    if (this != &fixedClass)
        this->_fixedNum = fixedClass.getRawBits();
    return *this;
}

bool Fixed::operator==(const Fixed &fixedClass)const
{
    return this->_fixedNum == fixedClass._fixedNum;
}

bool Fixed::operator!=(const Fixed &fixedClass)const
{
    return !(*this == fixedClass);
}

bool Fixed::operator>(const Fixed &fixedClass)const
{
    return this->_fixedNum > fixedClass._fixedNum;
}

bool Fixed::operator<(const Fixed &fixedClass)const
{
    return this->_fixedNum < fixedClass._fixedNum;
}

bool Fixed::operator>=(const Fixed &fixedClass)const
{
    return !(*this < fixedClass);
}

bool Fixed::operator<=(const Fixed &fixedClass)const
{
    return !(*this > fixedClass);
}

Fixed& Fixed::operator++(void)
{
    ++this->_fixedNum;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    const Fixed tmp = *this;
    ++(*this);
    return (tmp);
}

Fixed& Fixed::operator--(void)
{
    --this->_fixedNum;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    const Fixed tmp = *this;
    --(*this);
    return (tmp);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return (a);
    return (b);
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
