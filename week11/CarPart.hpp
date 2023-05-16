#ifndef _CAR_PART_H_
#define _CAR_PART_H_
#include <string>

class CarPart
{
protected:
    std::string name;
    std::string manufacturer;
    int year;
    int serNumber;
    static int count;

public:
    CarPart(std::string name,std::string manufacturer,int year);
    virtual ~CarPart();
    virtual void display() const =0 ;
    static int getCarPartsCount();
     
};



#endif