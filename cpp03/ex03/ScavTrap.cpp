#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "child Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :ClapTrap(name)
{
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "child Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energy_points <= 0)
    {
        std::cout << "run out of ep" << std::endl;
    }
    std::cout << "child " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
    this->_energy_points --;
}

void ScavTrap::guardGate()
{
    std::cout << this->_name << " is now in Gate keeper mode" << std::endl;
}
