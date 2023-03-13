#include <iostream>
#include <cmath>

class Triangle
{
private:
    double a, b, c, abc, cab, bca;
    
public:
    bool isRectangular()
    {
        if (abc*abc==cab*cab+bca*bca)
        {
            return true;
        }
        else if(cab * cab == abc * abc + bca * bca)
        {
            return true;
        }
        else if (bca * bca == cab * cab + abc * abc)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isRavnobedren()
    {
        if (a=b)
        {
            return true;
        }
        else if (c = b)
        {
            return true;
        }
        else  if (a = c)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    double perimeter()
    {
        return a + b + c;
    }
    double area()
    {
        double p = perimeter() / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }

    double height(char side)
    {
        double area2 = area();
        if (side=='a')
        {
            return 2 * area2 / a;
        }
        else if (side == 'b')
        {
            return 2 * area2 / b;
        }
        else if (side == 'c')
        {
            return 2 * area2 / c;
        }
       
    }
    
    double radiusInsideCircle()
    {
        double area2 = area();
        double p = perimeter() / 2;
        return area2 / p;
    }
    
};

int main()
{
    std::cout << "Hello World!\n";
}

