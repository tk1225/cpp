#include<string>
#include<iostream>

class Fixed
{
    private:
    int _fixedNum;
    static const int _fractionalBits = 8;
    public:
    Fixed();
    Fixed(const Fixed   &fixedClass);
    Fixed &operator=(const Fixed &fixedClass);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};
