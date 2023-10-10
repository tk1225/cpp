#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<string>
#include<iostream>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal   &AnimalClass);
        Animal& operator=(const Animal &AnimalClass);
        virtual ~Animal();

        virtual void makeSound() const = 0;
        std::string getType() const;
        void setType(std::string type);
};

#endif
