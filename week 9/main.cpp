#include <iostream>
#include "Animal.hpp"
#include "Pet.hpp"

int main()
{
    char name[]="Lion";
    char owner[]="Vasko";


    Animal a(name,5);
    Pet p(name,7,owner,8975789);
    std::cout<<p;
}