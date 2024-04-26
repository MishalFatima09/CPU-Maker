#pragma once
#include<string>
#include<iostream>
using namespace std;

class StorageDevice
{
	string type; //(e.g., HDD, SSD)
	int capacity; //4GB- 32 GB
	double price = 0;
public:

	StorageDevice();
	StorageDevice(string type, int capacity);

	double setPrice(string type);
	double getPrice() const;

	void input();

};

