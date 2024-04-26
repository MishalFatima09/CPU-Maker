#pragma once
class PhysicalMemory
{
	int capacity; //4GB -32GB
	double price;
public:
	PhysicalMemory();
	PhysicalMemory(int capacity);

	int getCapacity();
	double setPrice();
	double getPrice() const;

	void physicalMemoInput();

};

