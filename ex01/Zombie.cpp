#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ...\n"; 
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie name: " << name << "\n"; 
}
