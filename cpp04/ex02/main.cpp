#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // Animal tmp;

    Dog dog_basic;
    {
        Dog tmp = dog_basic;
    }

    Cat cat_basic;
    Cat cat_tmp;
    {
       cat_tmp  = cat_basic;
    }
}
