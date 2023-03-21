#include "Shoe.h"
#include <string>
#include <iostream>

Warehouse::Warehouse(const int capacity)
{
}

Warehouse::Warehouse(const Warehouse &other)
{
}

Warehouse &Warehouse::operator=(const Warehouse &rhs)
{
    if (this != &rhs)
    {
        
    }
    return *this;
    
}

Warehouse::~Warehouse()
{
    delete[] shoes;
    shoes=nullptr;
}
