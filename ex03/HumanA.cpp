#include "HumanA.hpp"

HumanA::HumanA(std::string h_name, Weapon &h_weapon) : name(h_name), weapon(h_weapon)
{
}

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << "\n";
}
