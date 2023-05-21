#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<string>
#include<iostream>

class ClapTrap
{
    protected:
    std::string _name;
    long _hit_points;
    long _energy_points;
    long _attack_damage;
    public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap   &ClapTrapClass);
    ClapTrap& operator=(const ClapTrap &ClapTrapClass);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
