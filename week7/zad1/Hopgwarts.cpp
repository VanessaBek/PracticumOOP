#include "Hopgwarts.h"

void Hogwarts::clear()
{
    delete[] students;
    students=nullptr;
    currentCount=0;
    capacity=0;
}

void Hogwarts::copy(const Hogwarts &other)
{
    currentCount=other.currentCount;
    capacity=other.capacity;
    students=new Student[capacity];
    for (size_t i = 0; i < currentCount; i++)
    {
        students[i]=other.students[i];
    }
    

}

Hogwarts::Hogwarts(Hogwarts &&other)
{
    if (this!=&other)
    {
        students=other.students;
        this->capacity=other.capacity;
        this->currentCount=other.currentCount;

        other.students=nullptr;
        other.currentCount=0;
        other.capacity=0;
    }
}

Hogwarts &Hogwarts::operator=(Hogwarts &&other)
{
    if (this!=&other)
    {
        clear();
        students=other.students;
        this->capacity=other.capacity;
        this->currentCount=other.currentCount;

        other.students=nullptr;
        other.currentCount=0;
        other.capacity=0;



    }
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Hogwarts &hogwarts)
{
    // TODO: insert return statement here
}
