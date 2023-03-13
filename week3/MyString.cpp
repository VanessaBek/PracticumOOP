#include "MyString.h"
#include <cstring>

void MyString::copy(const MyString& other)
{
    size=other.size;
    arr=new char[size];
    for (size_t i = 0; i < size; i++)
    {
        arr[i]=other.arr[i];
    }
    


}
void MyString::erase()
{
    delete[] arr;  
}

MyString::MyString() : arr(nullptr),size(0)
{

}
MyString::MyString(const char* str)
{
    size=strlen(str);
    arr=new char[size];
    for (size_t i = 0; i < size; i++)
    {
        arr[i]=str[i];
    }

}
MyString::MyString(const MyString& other)
{
    copy(other);
}
MyString& MyString::operator=(const MyString& other)
{
   if (this!= &other)
   {
     erase();
     copy(other);
   }
   
   return *this;
    
}
MyString::~MyString()
{
    erase();
}