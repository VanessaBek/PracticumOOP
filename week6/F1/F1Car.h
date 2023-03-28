#include <string>

#ifndef F1Car_H
#define F1Car_H

class F1Car {
private:
  std::string name;
  int year;
  int wins;
  double engine_capacity;
public:
  F1Car(std::string name,int year,int wins,double engine_c) : name{name}, year{year}, wins{wins}, engine_capacity{engine_capacity} {}


};

#endif