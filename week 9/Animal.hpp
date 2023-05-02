#ifndef _ANIMAL_H_
#define _ANIMAL_H_

class Animal
{
protected:
    char* name;
    unsigned age;
private:
    void copy(const Animal& other);
    void free();

public:
    Animal();
    Animal(const Animal& other);
    Animal(const char* name,const unsigned age);
    
    ~Animal();

    Animal& operator=(const Animal& other);

    void changeName(const char* newName);
};




#endif