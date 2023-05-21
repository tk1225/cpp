#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon(){}

const std::string& Weapon::getType()
{
    // std::string s = this->type;
    // std::string& t = this->type;
    // this->type

    return this->type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
