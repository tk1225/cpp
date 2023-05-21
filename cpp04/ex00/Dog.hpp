#ifndef DOG_HPP
#define DOG_HPP

#include<string>
#include<iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
    Dog();
    virtual void makeSound() const;
};

#endif
