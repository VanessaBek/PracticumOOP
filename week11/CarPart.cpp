#include "CarPart.hpp"

int CarPart::count=0;

CarPart::CarPart(std::string name, std::string manufacturer, int year):name(name),manufacturer(manufacturer),year(year)
{
    serNumber=count++;
}



int CarPart::getCarPartsCount()
{
    return count;
}
