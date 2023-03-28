#ifndef SimpleVector_H
#define SimpleVector_H

class SimpleVector
{
private:
    int data[10];
    int size;

public:
    SimpleVector addition(const SimpleVector vector);
    SimpleVector subtraction(const SimpleVector vector);
    SimpleVector multiplication(double n);
    SimpleVector division(double n);

};




#endif