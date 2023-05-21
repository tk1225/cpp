#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include<string>
#include<iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
    WrongCat();
    void makeSound() const;
};

#endif
