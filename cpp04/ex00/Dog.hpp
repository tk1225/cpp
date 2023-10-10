#ifndef DOG_HPP
#define DOG_HPP

#include<string>
#include<iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog   &DogClass);
        Dog& operator=(const Dog &DogClass);
        ~Dog();
        virtual void makeSound() const;
};

#endif
