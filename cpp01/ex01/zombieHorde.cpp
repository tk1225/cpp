#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
    Zombie * heap_array_zombie;
    int i = 0;

    try
    {
        heap_array_zombie = new Zombie [N];
    }
    catch (std::bad_alloc)
    {
        std::cerr << "Memory exhausted\n";
        exit(1);
    }
    while (i < N)
    {
        heap_array_zombie[i].setName(name);
        i ++;
    }
    return heap_array_zombie;
}
