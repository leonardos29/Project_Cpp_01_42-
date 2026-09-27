#include "ReplaceFile.hpp"

int handle_error(std::string err)
{
    std::cerr << err << "\n";
    return(1);
}

void handle_filename(std::ifstream &file, std::ofstream &out, std::string s1, std::string s2)
{
    std::string line;

    while(std::getline(file,line))
    {
        size_t pos = 0;
        while((pos = line.find(s1, pos)) != std::string::npos)
        {
             line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
             pos += s2.length();
        } 
        out << line + "\n";   
    }
}