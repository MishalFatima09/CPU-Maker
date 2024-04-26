#include "PhysicalMemory.h"
#include<iostream>
using namespace std;
PhysicalMemory::PhysicalMemory()
{
	this->capacity = 0;
	this->price = setPrice();
}
PhysicalMemory::PhysicalMemory(int capacity = 0) 
{
	this->capacity = capacity;
	this->price = setPrice();
}
int PhysicalMemory::getCapacity() { return this->capacity; }

double PhysicalMemory::setPrice()
{
	if (this->capacity == 4)
	{
		return this->price = 4000;
	}
	else if (this->capacity == 8)
	{
		return this->price = 8000;
	}

	else if(this->capacity == 16)
	{
		return this->price = 16000;
	}
	else if (this->capacity == 32)
	{
		return this->price = 32000;
	}
}

double PhysicalMemory::getPrice() const
{
	return this->price;
}

void PhysicalMemory::physicalMemoInput()
{
	cout << "How much Physical memory do you require? (4,8,16,32)" << endl;
	cin >> this->capacity;

	while (true) {
		if (this-> capacity >= 4 && this->capacity <= 32) {
			break;
		}
		else {
			cerr << "Invalid input. Please enter a baud rate within the range of 0 to 32 Mbps." << endl;
			cout <<  "How much Physical memory do you require? (4,8,16,32)" << endl;
			cin >> this-> capacity;
		}
	}
	this->price = setPrice();
}