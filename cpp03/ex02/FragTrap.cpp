#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "child Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) :ClapTrap(name)
{
    std::cout << "child constructor called. Initialization list" << std::endl;
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "child Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "child highFive!!" << std::endl;
}
