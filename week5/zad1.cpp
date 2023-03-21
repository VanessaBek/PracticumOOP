#include <iostream>
#include <fstream>


int main()
{
    std::ifstream if_stream;
    if_stream.open("text.txt");
    if (!if_stream.is_open())
    {
        throw std::exception();
    }

    if_stream.seekg(0,std::ios::end);
    int fileSize=if_stream.tellg();
    std::cout<<"File size is: "<<fileSize<<"bytes";
    
    if_stream.close();
}