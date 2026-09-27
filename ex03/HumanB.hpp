#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public:
        void attack(void);
        void setWeapon(Weapon &weapon);
        HumanB(std::string h_name);
    private:
        std::string name;
        Weapon *weapon;
};

#endif
