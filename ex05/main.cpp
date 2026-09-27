#include "Harl.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "Invalid number of argument";
        return(1);
    }
    std::string level = argv[1];
    Harl harl;
    std::cout << "[ " << level << " ]\n"; 
    harl.complain(level);
    return(0);
}