#include "Student.h"

Student::Student() : name(""),health(100),power(nullptr),house("")
{
}

Student::Student(const std::string &name): name(name),health(100),power(nullptr),house("")
{
}

const std::string &Student::getName() const
{
    // TODO: insert return statement here
}

const std::string &Student::getHouse() const
{
    // TODO: insert return statement here
}

void Student::setHouse(const std::string &house)
{
}

int Student::getHealth() const
{
    return this->health;
}

void Student::takeDamage(int damage) const
{
    
}

void Student::setPower(const Power *power) 
{
    this->power=power;
}

const Power *Student::getPower() const
{
    return power;
}

bool Student::isAlive() const
{
    return false;
}

int Student::attack() const
{
    return power->getDamage();
}
