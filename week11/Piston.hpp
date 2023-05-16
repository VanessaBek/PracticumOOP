#ifndef _PISTON_H_
#define _PISTON_H_
#include "CarPart.hpp"

class Piston:public CarPart
{
private:
    int diam;
    int range;
    
public:
    Piston();
    ~Piston();
    void display() const override;
};



#endif