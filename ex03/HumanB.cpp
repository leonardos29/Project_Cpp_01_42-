#include "HumanB.hpp"

HumanB::HumanB(std::string h_name) : name(h_name), weapon(NULL)
{
}

void HumanB::setWeapon(Weapon &h_weapon)
{
    weapon = &h_weapon;
}

void HumanB::attack(void)
{
    std::cout << name << " attacks with their " << weapon->getType() << "\n";
}
