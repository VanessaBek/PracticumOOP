#ifndef _ENGINE_H_
#define _ENGINE_H_
#include <vector>
#include "Piston.hpp"
#include "CarPart.hpp"

class Engine:public CarPart
{
private:
    int hp;
    std::vector<Piston> pistons;
public:
    Engine(int hp,std::string name,std::string manufacturer,int year);
    ~Engine();
    void display() const override;
    void addPiston(const Piston& piston);
};



#endif