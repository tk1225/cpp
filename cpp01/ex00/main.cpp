#include "Zombie.hpp"

int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;
    std::string heap_name;
    std::string rand_name;

    Zombie z = Zombie("stack_z");
    z.announce();

    std::cin >> heap_name;

    Zombie *zombie_heap = newZombie(heap_name);
    zombie_heap->announce();

    std::cin >> rand_name;
    randomChump(rand_name);
    delete zombie_heap;
    return (0);
}
