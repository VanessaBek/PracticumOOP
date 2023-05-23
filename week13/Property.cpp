#include "Property.hpp"

std::string Property::getOwner()
{
    return owner;
}

bool Property::getTangible()
{
    return tangible;
}

Property::Property(std::string owner, bool tangible):owner(owner),tangible(tangible)
{
}
