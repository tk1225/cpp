#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap   &DiamondTrapClass)
{
    *this = DiamondTrapClass;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &DiamondTrapClass)
{
    if (this != &DiamondTrapClass)
    {
        this->_name = DiamondTrapClass._name;
        this->_hit_points = DiamondTrapClass._hit_points;
        this->_energy_points = DiamondTrapClass._energy_points;
        this->_attack_damage = DiamondTrapClass._attack_damage;
    }
    return *this;
}
