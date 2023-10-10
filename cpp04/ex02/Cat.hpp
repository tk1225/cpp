#ifndef CAT_HPP
#define CAT_HPP

#include<string>
#include<iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain   *_brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat   &CatClass);
        Cat& operator=(const Cat &CatClass);
        virtual void makeSound() const;
};

#endif
