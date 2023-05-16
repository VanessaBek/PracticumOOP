#include "Tyre.hpp"
#include <iostream>

Tyre::Tyre(double width, int profile, int diam, std::string name, std::string manufacturer, int year):CarPart(name,manufacturer,year),width(width),profile(profile),diam(diam)
{
}

void Tyre::display() const
{
    std::cout<<"I am a tyre.";
    std::cout<<this->diam<<" "<<this->profile<<" "<<this->width<<" "<<this->serNumber<<" "<<this->name<<" "<<this->year<<std::endl;
}
