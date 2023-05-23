#include "Car.hpp"
#include <cstring>
#include <iostream>

void Car::copy(const Car &other)
{
    brand=new char[strlen(other.brand)+1];
    strcpy(brand,other.brand);
    model=new char[strlen(other.model)+1];
    strcpy(model,other.model);
}

void Car::deleteData()
{
    delete[] brand;
    delete[] model;
}

Car::Car(int power, int weight, std::string owner, bool tangible, char *brand, char *model)
:Property(owner,tangible),Vehicle(power,weight)
{
    this->brand=new char[strlen(brand)+1];
    strcpy(this->brand,brand);
    this->model=new char[strlen(model)+1];
    strcpy(this->model,model);
}

Car::Car(const Car &other)
{
    copy(other);
}

Car &Car::operator=(const Car &other)
{
    if (this!=&other)
    {
        deleteData();
        copy(other);
    }
    return *this;
}

Car::~Car()
{
    deleteData();
}

void Car::startEngine()
{
    std::cout<<"Vrooom"<<std::endl;
}
