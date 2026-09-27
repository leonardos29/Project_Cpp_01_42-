#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n\n";
}
void Harl::info(void)
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n\n";
}
void Harl::warning(void)
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.\n\n";
}
void Harl::error(void)
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
Level getLevel(std::string level)
{
    if (level == "DEBUG")   
        return DEBUG;
    if (level == "INFO")    
        return INFO;
    if (level == "WARNING") 
        return WARNING;
    if (level == "ERROR")   
        return ERROR;
    return INVALID;
}
void Harl::complain(std::string level)
{
    void (Harl::*methods[])(void) = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    int levelI = getLevel(level);

    if(levelI == 4)
    {
        std::cout << "[ Probably complaining about insignificant problems ]\n";
        return;
    }
    switch (levelI)
    {
    case 0:
        (this->*methods[0])();
        // fall through
    case 1:
        (this->*methods[1])();
        // fall through
    case 2:
         (this->*methods[2])();
         // fall through
    case 3:
         (this->*methods[3])();
         // fall through
    default:
        break;
    }
}

