#include <iostream>

const int MAX_LENGTH = 20;

class Waffle
{
public:
    char brand[MAX_LENGTH];
    double weight;
    float price;
    float priceForClient;
public:
    
};

class StoreForWaffles
{
private:
    Waffle waffle_example;
    int currentCount;
    int maxCount;
    float currentIncome;
    float currentOutcome;
public:
    void initialize()
    {
        currentCount = 0;
        currentIncome = 0;
        currentOutcome = 0;
        std::cout << "Enter max count:";
        std::cin >> maxCount;
    }
    void orderWaffles(Waffle waffle, int count)
    {
        if (this->currentCount != 0)
        {
            throw std::exception("Shop not empty");
        }
        if (maxCount < count)
        {
            throw std::exception("Not enough space");
        }
        waffle_example = waffle;
        currentCount = count;
        currentOutcome += waffle.price * count;
    }
    void sellWaffle()
    {
        
    }
    void profit()
    {
        std::cout << "Profit is: " << currentIncome - currentOutcome;
    }

};



int main()
{
    std::cout << "Hello World!\n";
}

