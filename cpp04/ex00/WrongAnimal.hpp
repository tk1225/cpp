#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include<string>
#include<iostream>

class WrongAnimal
{
    protected:
        std::string _type;

    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal   &WrongAnimalClass);
        WrongAnimal& operator=(const WrongAnimal &WrongAnimalClass);
        virtual ~WrongAnimal();

        void makeSound() const;
        std::string getType() const;
};

#endif
