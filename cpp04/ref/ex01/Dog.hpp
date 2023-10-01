#ifndef DOG_HPP
#define DOG_HPP

#include<string>
#include<iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog   &DogClass);
        Dog& operator=(const Dog &DogClass);
        virtual void makeSound() const;
};

#endif
