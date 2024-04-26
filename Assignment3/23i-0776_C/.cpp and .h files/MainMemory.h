#pragma once
#include<string>
#include<iostream>
using namespace std;
class MainMemory
{
	int capacity;
	string technologyType;
	double price = 16000;

public:
	MainMemory();
	MainMemory(string type, int capacity);

	int getCapacity() const;
	double getPrice() const;

	void input();

};

