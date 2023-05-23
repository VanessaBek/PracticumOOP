#ifndef _CAR_H_
#define _CAR_H_
#include "Property.hpp"
#include "Vehicle.hpp"

class Car:public Property,public Vehicle
{
protected:
    char* brand;
    char* model;
    void copy(const Car& other);
    void deleteData();
public:
    Car(int power,int weight,std::string owner, bool tangible,char* brand,char* model);
    Car(const Car& other);
    Car& operator=(const Car& other);
    ~Car();
    void startEngine() override;

};

#endif