#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->_type = "WrongCat";
}

void WrongCat::makeSound() const
{
    std::cout << "nya" << std::endl;
}
