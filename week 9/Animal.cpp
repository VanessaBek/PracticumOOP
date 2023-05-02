#include <cstring>
#include "Animal.hpp"


void Animal::copy(const Animal &other)
{
    name=new char[strlen(other.name)+1];
    strcpy(name,other.name);
    age=other.age;
}

void Animal::free()
{
    delete[] name;
    name=nullptr;
    age=0;
}

Animal::Animal():name{nullptr},age{0}
{
    
}

Animal::Animal(const Animal &other)
{
    copy(other);
}

Animal::Animal(const char *name, const unsigned age)
{
    this->name=new char[strlen(name)+1];
    strcpy(this->name,name);
    this->age=age;
}

Animal::~Animal()
{
    free();
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
	{
		free();
		copy(other);
	}
	return *this;
}

void Animal::changeName(const char *newName)
{
    delete[] name;
    name=new char[strlen(newName)+1];
    strcpy(name,newName);
}
