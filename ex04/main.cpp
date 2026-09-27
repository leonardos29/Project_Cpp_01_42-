#include "ReplaceFile.hpp"

int main(int argc, char **argv)
{
    if(argc != 4)
        return(handle_error("Error: just acept 3 arguments"));

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if(s1.empty())
        return(handle_error("S1 is empty"));

    std::ifstream file(filename.c_str());
    if(!file.is_open())
          return(handle_error("Error to handle the file"));

    std::ofstream outfile((filename + ".replace").c_str());
        if(!outfile.is_open())
            return(handle_error("Error to create output"));
            
    handle_filename(file,outfile, s1, s2);
    file.close();
    outfile.close();
    return(0);
}