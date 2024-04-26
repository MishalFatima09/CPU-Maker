#include "StorageDevice.h"

StorageDevice::StorageDevice()
{
	this->type = "";
	this->capacity = 0;
}

StorageDevice::StorageDevice(string type = 0, int capacity = 0)
{
	this->type = type;
	this->capacity = capacity;
	this->price = setPrice(type);
}

double StorageDevice:: setPrice(string type)
{
	if (this->type == "SSD")
	{
		return this->price = 8000;
	}
	else if (this->type == "HDD")
	{
		return this->price = 7000;
	}


}
double StorageDevice::getPrice() const { return this->price; }

void StorageDevice:: input()
{
	while (true) {
		cout << "What kind of storage would you like? (SSD/HDD)" << std::endl;
		cin >> this->type;
		if (type == "SSD" || type == "HDD")
			break;

		else {
			cerr << "invalid, pls enter either 'SSD' or 'HDD'." << std::endl;
			cin.clear();
		}
	}
	setPrice(type);

	while (true) {
		cout << "How much main memory would you like?" << std::endl;
		cin >> this->capacity;
		if (capacity >= 2 && capacity <= 16 && capacity % 2 == 0)
			break;

		else {
			cerr << "invalid, pls enter size within limits in multiples of 2." << std::endl;
			cin.clear();
		}
	}

}