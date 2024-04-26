#include "MainMemory.h"
MainMemory::MainMemory() {
	this->capacity = 0;
	this->technologyType = "";
}
MainMemory::MainMemory(string type, int capacity)
{
	this->technologyType = type;
	this->capacity = capacity;
}
int MainMemory::getCapacity() const { return this->capacity;}

double MainMemory::getPrice() const 
{ return this->price; }

void MainMemory::input()
{

    while (true) {
        cout << "How much main memory would you like?(2GB - 16GB)" << std::endl;
        cin >> this->capacity;
        if (capacity >= 2 && capacity <= 16 && capacity % 2 == 0)
            break;

        else {
            cerr << "invalid, pls enter size within limits in multiples of 2." << std::endl;
            cin.clear();
        }
    }

}
