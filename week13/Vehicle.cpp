#include "Vehicle.hpp"

Vehicle::Vehicle(int power, int weight):power(power),weight(weight)
{
}

int Vehicle::getPower()
{
    return power;
}

int Vehicle::getWeight()
{
    return weight;
}
