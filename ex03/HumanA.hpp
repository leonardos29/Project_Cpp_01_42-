#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    public:
        void attack(void);
        HumanA(std::string h_name, Weapon &weapon);
    private:
        std::string name;
        Weapon &weapon;
};

#endif
