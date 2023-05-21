#include<string>
#include<iostream>
#include<math.h>

class Fixed
{
    private:
    int _fixedNum;
    static const int _fractionalBits = 8;
    public:
    Fixed();
    Fixed(const int num);
    Fixed(const float num);
    Fixed(const Fixed   &fixedClass);
    Fixed &operator=(const Fixed &fixedClass);
    Fixed &operator+(const Fixed &fixedClass);
    Fixed &operator-(const Fixed &fixedClass);
    Fixed &operator*(const Fixed &fixedClass);
    Fixed &operator/(const Fixed &fixedClass);
    bool operator==(const Fixed &fixedClass) const;
    bool operator!=(const Fixed &fixedClass) const;
    bool operator>(const Fixed &fixedClass) const;
    bool operator<(const Fixed &fixedClass) const;
    bool operator>=(const Fixed &fixedClass) const;
    bool operator<=(const Fixed &fixedClass) const;
    Fixed& operator++(void);
    Fixed operator++(int);
    Fixed& operator--(void);
    Fixed operator--(int);

    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);

    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};

inline std::ostream& operator<<(std::ostream& os, const Fixed &f) {
        os << f.toFloat();
        return os;
}
