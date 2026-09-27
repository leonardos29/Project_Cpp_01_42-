#include "Zombie.hpp"

int main()
{
    Zombie *z_horde = zombieHorde(4, "Ashe");
    for(int i = 0; i < 4; i++)
        z_horde[i].announce();
    delete[] z_horde;
}
