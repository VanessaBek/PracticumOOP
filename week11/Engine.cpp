#include "Engine.hpp"
#include <iostream>


Engine::Engine(int hp, std::string name, std::string manufacturer, int year):hp(hp),CarPart(name,manufacturer,year)
{
}

void Engine::display() const
{
    std::cout<<this->hp<<std::endl;
    for (size_t i = 0; i < pistons.size(); i++)
    {
        pistons[i].display();
    }
    
    std::cout<<this->serNumber<<" "<<this->name<<" "<<this->year<<std::endl;
}

void Engine::addPiston(const Piston &piston)
{
    pistons.push_back(piston);
}
