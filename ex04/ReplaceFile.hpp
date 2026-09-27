#ifndef REPLACE_FILE_HPP
#define REPLACE_FILE_HPP

#include <fstream>
#include <iostream>
#include <string>

int handle_error(std::string err);
void handle_filename(std::ifstream &file, std::ofstream &out, std::string s1, std::string s2);

#endif
