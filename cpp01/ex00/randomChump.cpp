#include "Zombie.hpp"

void randomChump(std::string name)
{
    //stack領域の関数内で作成
    Zombie z = Zombie(name);
    z.announce();
}
