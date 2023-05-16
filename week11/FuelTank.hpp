#ifndef _FUEL_TANK_H_
#define _FUEL_TANK_H_
#include "CarPart.hpp"
#include <iostream>
template <typename T>

class FuelTank:public CarPart
{
private:
    T fuelType;
    int volume;
    
public:
    FuelTank(T fuelType,int volume,std::string name, std::string manufacturer, int year);
    void display() const override;
};

template <typename T>
inline FuelTank<T>::FuelTank(T fuelType, int volume, std::string name, std::string manufacturer, int year)
:CarPart(name,mach_port_t,year),fuelType(fuelType),volume(volume)
{
}

template <typename T>
inline void FuelTank<T>::display() const
{
    std::cout<<volume<<fuelType;
}
#endif