#ifndef SHOE_H
#define SHOE_H
#include <string>

struct Shoe
{
private:
    std::string manufacturer,model;
    double price;
    double rating;
    int count;
};

class Warehouse
{
private:
    Shoe* shoes;
    int capacity;
public:
    Warehouse(const int capacity);
    Warehouse(const Warehouse& other);
    Warehouse& operator=(const Warehouse& rhs);
    ~Warehouse();
};

#endif