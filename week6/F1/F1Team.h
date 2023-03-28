#include <string>
#include "F1Car.h"

#ifndef F1Team_H
#define F1Team_H

class F1Team
{
private:
    std::string name;
    F1Car cars[2];
public:
    void writeData(const std::string& filename);
    void readData(const std::string& filename);
    
};



#endif