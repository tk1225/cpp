#include<string>
#include<iostream>

class Zombie
{
    private:
    std::string name;
    public:
    static Zombie* zombieHorde(int N, std::string name);
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
    void setName(std::string name);
};
