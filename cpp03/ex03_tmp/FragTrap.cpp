#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "g_child Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) :ScavTrap(name)
{
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "g_child Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "g_child highFive!!" << std::endl;
}
