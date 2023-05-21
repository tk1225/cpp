#include "Zombie.hpp"

int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;
    Zombie *z = Zombie::zombieHorde(0, "taku");

    int i = 0;

    while (i < 5)
    {
        z[i].announce();
        i ++;
    }

    delete []z;
    return (0);
}
