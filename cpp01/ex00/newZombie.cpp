#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *z;

    try
    {
        z = new Zombie(name);
    }
    catch (std::bad_alloc)
    {
        std::cerr << "Memory exhausted\n";
        exit(1);
    }
    return z;
}
