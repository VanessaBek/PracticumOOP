#ifndef _CAR_H_
#define _CAR_H_
#include "CarPart.hpp"
#include <string>

class Car
{
private:
    CarPart** parts;
    std::string model;
    std::string maker;
public:
    Car();
   
    Car(const Car& other);
   
    ~Car();
};



#endif