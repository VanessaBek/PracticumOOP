#include "Piston.hpp"
#include <iostream>

void Piston::display() const
{
    std::cout<<this->diam<<" "<<this->range<<" "<<this->serNumber<<" "<<this->name<<" "<<this->year<<std::endl;
}