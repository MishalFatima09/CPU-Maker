#include "GraphicsCard.h"


GraphicsCard::GraphicsCard()
{
	this->brand = "";
	this->memorySize = 0;
	this->price = 0;

}

GraphicsCard::GraphicsCard(string brand = "", int memory = 0)
{
	this->brand = brand;
	this->memorySize = memory;
	this->price = setPrice();
}

double GraphicsCard:: setPrice()
{
	if (this->brand == "Nvidia")
	{
		return this-> price = 125000;
	}

	else if (this->brand == "AMD")
	{
		return this-> price = 100000;
	}

}

double GraphicsCard:: getPrice() const
{
	return this->price;

}

void GraphicsCard::setBrand(string b) { this->brand = b; }
string GraphicsCard::getBrand() const { return this->brand; }

void GraphicsCard::setMemory(int memo) { this->memorySize = memo; }
int GraphicsCard::getMemory() { return this->memorySize; }

void GraphicsCard::input()
{
   
    while (true) {
        cout << "What brand of graphics card would you like? (Nvidia/ AMD)" << std::endl;
        cin >> this->brand;
        if (brand == "Nvidia" || brand == "AMD")
            break;

        else {
            cerr << "invalid, pls enter either 'Nvidia' or 'AMD'." << std::endl;
            cin.clear();
        }
    }
    
    while (true) {
        cout << "What size of memory of the graphics card would you like? (2GB-16GB)" << std::endl;
        cin >> this->memorySize;
        if (memorySize >= 2 && memorySize <= 16 && memorySize % 2 == 0)
            break;

        else {
            cerr << "invalid, pls enter size within limits in multiples of 2." << std::endl;
            cin.clear();
        }
    }

    setPrice();

}
