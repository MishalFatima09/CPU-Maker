#pragma once
#include<string>
#include<iostream>
using namespace std;
class GraphicsCard
{
protected:
	string brand;
	int memorySize;
	double price;
public:
	GraphicsCard();

	GraphicsCard(string brand, int memory);

	void setBrand(string b);
	string getBrand() const;

	double setPrice();
	double getPrice() const;

	void setMemory(int memo);
	int getMemory();

	void input();

};

