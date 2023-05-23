#ifndef _VEHICLE_H_
#define _VEHICLE_H_

class Vehicle
{
protected:
    int power;
    int weight;
public:
    Vehicle(int power,int weight);
    Vehicle();
    virtual void startEngine()=0;
    int getPower();
    int getWeight();
    
};



#endif