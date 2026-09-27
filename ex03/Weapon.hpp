#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    public:
        const std::string& getType(void) const;
        void setType(std::string weapon_type);
        Weapon(std::string weapon_type);
    private:
        std::string type;
};

#endif
