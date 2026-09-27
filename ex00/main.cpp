#include "Zombie.hpp"

int main(void)
{
    // caso heap
    Zombie *z = newZombie("Heap Zombie");
    z->announce();
    delete z;

    // caso stack
    randomChump("Stack Zombie");
}
