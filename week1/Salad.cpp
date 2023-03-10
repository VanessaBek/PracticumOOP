#include <iostream>

const int MAX_LEN=20;

struct Vegetable
{
    char name[MAX_LEN];
    float weight;

    void inputVegetable()
	{
		std::cout << "Vegetable name: ";
		std::cin.getline(name, MAX_LEN);

		std::cout << "Vegetable weight: ";
		std::cin >> weight; std::cin.ignore();
	}

};

struct Dressing
{   
    char name[MAX_LEN];
    float quantity;
    char allergen[MAX_LEN];

    void inputDressing()
	{
		std::cout << "Dressing name: ";
		std::cin.getline(name, MAX_LEN);

		std::cout << "Dressing quantity: ";
		std::cin >> quantity; std::cin.ignore();

		std::cout << "Allergen name: ";
		std::cin.getline(allergen, MAX_LEN);
	}
};

struct Salad
{
    char name[MAX_LEN];
    Vegetable vegetables[3];
    Dressing dressing;
    float price;

    void inputSalad()
	{
		std::cout << "Salad name: ";
		std::cin.getline(name, MAX_LEN);

		for (int i = 0; i < 3; i++)
		{
			vegetables[i].inputVegetable();
		}
		dressing.inputDressing();
		
		std::cout << "Salad price: ";
		std::cin >> price; std::cin.ignore();
	}

    float getWeight()
	{
		double ans = 0;
		for (int i = 0; i < 3; i++)
			ans += vegetables[i].weight;
		return ans;
	}

    void printAllergen()
	{
		std::cout << dressing.allergen;
	}

    void print()
	{
		std::cout << name << std::endl;

		std::cout << "Contents: ";
		for (int i = 0; i < 3; i++)
			std::cout << vegetables[i].name << " " ;
		std::cout << dressing.name << std::endl;

		std::cout << "Price: " << price << std::endl;
		std::cout << "Weight: " << getWeight()  << std::endl;
		std::cout << "Allergen: " << dressing.allergen << std::endl;
	}

};

void analyseSalads(Salad salads[], int n)
{
	std::cout << "Salads: ";

	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		std::cout << salads[i].name << " ";
		sum += salads[i].price;
	}
	std::cout << std::endl;

	std::cout << "Total cost: " << sum << std::endl;
	
	std::cout << "Allergens: ";
	for (int i = 0; i < n; i++)
	{
		salads[i].printAllergen();
		std::cout << ", ";
	}
	std::cout << std::endl;
}


int main()
{
    Salad salad1;
	salad1.inputSalad();
	std::cout << std::endl;
	salad1.print();

	
	Salad salad_arr[5];
	for(int i=0; i<5; i++)
		salad_arr[i].inputSalad();

	analyseSalads(salad_arr,5);
}P