#ifndef _TYRE_H_
#define _TYRE_H_

#include "CarPart.hpp"

class Tyre:public CarPart
{
private:
    double width;
    int profile;
    int diam;
public:
    Tyre(double width,int profile,int diam,std::string name, std::string manufacturer, int year);
    ~Tyre();
    void display() const override;
};




#endif