#include <iostream>
#include <fstream>
#include "F1Team.h"

int main()
{
    F1Car car1 ={"Ferrari", 2023, 0, 1.6};
    F1Car car2 = {"Porsche", 2022, 1, 1.9};

    

    

    std::ofstream o_file("car.bin", std::ios::binary);
    if (!o_file.is_open()) 
    {
        std::cout << "Error opening file!\n";
        return 1;
    }


}