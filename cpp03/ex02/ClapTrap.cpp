#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "constructor called. Initialization list" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap   &ClapTrapClass)
{
    *this = ClapTrapClass;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ClapTrapClass)
{
    if (this != &ClapTrapClass)
    {
        this->_name = ClapTrapClass._name;
        this->_hit_points = ClapTrapClass._hit_points;
        this->_energy_points = ClapTrapClass._energy_points;
        this->_attack_damage = ClapTrapClass._attack_damage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energy_points <= 0)
    {
        std::cout << "run out of ep" << std::endl;
    }
    else
        std::cout << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
    this->_energy_points --;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points <= amount)
    {
        std::cout << "dead" << std::endl;
    }
    else
        std::cout << this->_name << " damaged " << amount << " points of damage!" << std::endl;
    this->_hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energy_points <= 0)
    {
        std::cout << "run out of ep" << std::endl;
    }
    else
        std::cout << this->_name << " repaired " << amount << " points of recover!" << std::endl;
    this->_energy_points --;
    this->_hit_points += amount;
}
