#include <cstring>
#include "Pet.hpp"

void Pet::free()
{
    delete[] owner;
    owner=nullptr;
    number=0;
}

void Pet::copy(const Pet &other)
{
    owner=new char[strlen(other.owner)+1];
    strcpy(owner,other.owner);
    number=other.number;
}

Pet &Pet::operator=(const Pet &other)
{
    if (this!= &other)
    {
        Animal::operator=(other);
        free();
        copy(other);
    }

    return *this;
    
}

Pet::Pet(const char *name, const unsigned int age, const char *owner, const unsigned number):Animal(name,age)
{
    this->owner=new char[strlen(owner)+1];
    strcpy(this->owner,owner);
    this->number=number;
}

void Pet::changeOwner(const char *newOwner)
{
    delete[] owner;
    owner=new char[strlen(newOwner)+1];
    strcpy(owner,newOwner);
}

Pet::Pet():Animal(),owner{nullptr},number{0}
{
}

Pet::Pet(const Pet &other):Animal(other)
{
    copy(other);
}

Pet::~Pet()
{
    free();
}

std::ostream &operator<<(std::ostream &os, const Pet &pet)
{
    return os<<pet.owner<<" "<<pet.number<<" "<<pet.name<<" "<<pet.age<<std::endl;
}
