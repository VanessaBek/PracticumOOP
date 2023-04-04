#include "Power.h"

Power::Power(const std::string &name, int damage):name(name), damage(damage)
{
    
}

const std::string &Power::getName() const
{
    return this->name;
}

int Power::getDamage() const
{
    return this->damage;
}

bool Power::operator<(const Power &other) const
{
    return this->damage<other.damage;
    
}
