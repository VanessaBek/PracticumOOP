#ifndef _PET_H_
#define _PET_H_
#include <iostream>
#include "Animal.hpp"

class Pet : public Animal
{
private:
    char* owner;
    unsigned number;

    void copy(const Pet& other);
    void free();
public:
    Pet();
    Pet(const Pet& other);
    Pet(const char* name,const unsigned int,const char* owner,const unsigned number);

    ~Pet();

    Pet& operator=(const Pet& other);
    void changeOwner(const char* newOwner);
    friend std::ostream& operator<<(std::ostream& os, const Pet& pet);
};




#endif