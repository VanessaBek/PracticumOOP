#include "SimpleVector.h"
#include <iostream>

SimpleVector SimpleVector::addition(const SimpleVector vector)
{
    if (this->size!=vector.size)
    {   
        std::cout<<"Different size!";
        throw std::exception();
        
    }
    
    SimpleVector newVector;
    newVector.size=this->size;
    for (size_t i = 0; i < this->size; i++)
    {
        newVector.data[i]=vector.data[i]+this->data[i];
    }
    
    return newVector;
}

SimpleVector SimpleVector::subtraction(const SimpleVector vector)
{
    if (this->size!=vector.size)
    {   
        std::cout<<"Different size!";
        throw std::exception();
        
    }
    
    SimpleVector newVector;
    newVector.size=this->size;
    for (size_t i = 0; i < this->size; i++)
    {
        newVector.data[i]=vector.data[i]-this->data[i];
    }
    
    return newVector;
}

SimpleVector SimpleVector::multiplication(double n)
{
    for (size_t i = 0; i < this->size; i++)
    {
        this->data[i]*=n;
    }
    
    return *this;
}

SimpleVector SimpleVector::division(double n)
{
    for (size_t i = 0; i < this->size; i++)
    {
        this->data[i]/=n;
    }
    
    return *this;
}
