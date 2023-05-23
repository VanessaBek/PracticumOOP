#ifndef _PROPERTY_H_
#define _PROPERTY_H_
#include <string>

class Property
{
protected:
    std::string owner;
    bool tangible;
public:
    std::string getOwner();
    bool getTangible();
    Property(std::string owner, bool tangible);
    Property();
    ~Property();
};



#endif