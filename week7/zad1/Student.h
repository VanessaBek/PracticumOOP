#ifndef STUDENT_H
#define STUDENT_H

#include <string>

#include "Power.h"


class Student {
private:
    std::string name,house;
    const Power*  power;
    int health;


public:
   Student();
   Student(const std::string& name);

   const std::string& getName() const;
   const std::string& getHouse() const;
   void setHouse(const std::string& house);
   int getHealth() const;
   void takeDamage(int damage) const;
   void setPower(const Power* power);
   const Power* getPower() const;
   bool isAlive() const;
   int attack() const;
};

#endif // STUDENT_H