#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// Animal tmp = new Animal();
	// delete tmp;
	Animal *tmp = new Dog();
	delete tmp;
}
