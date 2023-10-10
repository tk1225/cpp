#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include<string>
#include<iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat   &WrongCatClass);
        WrongCat& operator=(const WrongCat &WrongCatClass);
        ~WrongCat();
        void makeSound() const;
};

#endif
