#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strPtr = &str;
    std::string &strRef = str;

    std::cout << "Memory adress of the pointer: " << strPtr << "\n";
    std::cout << "Memory adress of Ref: " << &strRef << "\n";
    std::cout << "Memory adress of the str: " << &str << "\n\n";

    std::cout << "The value of str: " << str << "\n";
    std::cout << "The value of str pointer: " << *strPtr << "\n";
    std::cout << "The value of str Ref: " << strRef << "\n";
}
