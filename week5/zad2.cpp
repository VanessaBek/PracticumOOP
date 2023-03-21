#include <iostream>
#include <fstream>


int main()
{
    std::ifstream if_stream;
    if_stream.open("zad2.cpp");
    if (!if_stream.is_open())
    {
        throw std::exception();
    }

    const int buffer_size = 1024;
    char line[buffer_size];
    while (if_stream.getline(line, buffer_size))
    {
        std::cout << line << "\n";
    }
    
    if_stream.close();
}