#include "Battery.h"
#include<iostream>
using namespace std;
Battery::Battery():capacity(0), price(0)
{}

Battery::Battery(int capacity)
{
	this->capacity = capacity;
	this->price = setPrice();
}

void Battery::getInput()
{
	cout << "How much capacity of battery would you like? (30 -100) Wh" << endl;
	cin >> this->capacity;
	while (true) {
		if (this->capacity >= 30 && this->capacity <= 100) {
			break;
		}
		else {
			cerr << "Invalid input. Please enter within the range of 30 to 100 Wh." << endl;
			cout << "What baud rate do you want? (30-100 Wh)" << endl;
			cin >> this->capacity;
		}
	}
	setPrice();
}

double Battery::setPrice()
{
	if (capacity == 30)
		this->price = 3000;
	else if (capacity == 40)
		this->price = 4000;
	else if (capacity == 50)
		this->price = 5000;
	else if (capacity == 60)
		this->price = 6000;
	else if (capacity == 70)
		this->price = 7000;
	else if (capacity == 80)
		this->price = 8000;
	else if (capacity == 90)
		this->price = 9000;
	else if (capacity == 100)
		this->price = 10000;

	return this->price;
}

double Battery::getPrice()
{
	return this->price;
}
