#include "F1Team.h"
#include <fstream>
#include <iostream>

void F1Team::writeData(const std::string& filename)
{
    std::ofstream o_file(filename, std::ios::binary);
    if (!o_file.is_open()) 
    {
        std::cout << "Error opening file!\n";
        throw std::exception();
    }
    o_file.write((char*)this, sizeof(F1Team));
    o_file.close();
}

void F1Team::readData(const std::string& filename)
{
    std::ifstream o_file(filename, std::ios::binary);
    if (!o_file.is_open()) 
    {
        std::cout << "Error opening file!\n";
        throw std::exception();
    }
    o_file.read((char*)this, sizeof(F1Team));
    o_file.close();
}
