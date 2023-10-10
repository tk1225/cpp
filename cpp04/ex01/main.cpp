#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    Animal tmp = *(animals[0]);
    std::cout << animals[0]->getType() << std::endl;
    tmp.setType("deep_dog");
    std::cout << animals[0]->getType() << std::endl;
    std::cout << tmp.getType() << std::endl;
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }
    Dog dog_basic;
    {
        Dog tmp = dog_basic;
    }

    Cat cat_basic;
    Cat tmp;
    {
        tmp  = cat_basic;
    }
}
