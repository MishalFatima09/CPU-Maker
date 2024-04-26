#pragma once
#include"PhysicalMemory.h"
#include"MotherBoard.h"
class Computer
{
	PhysicalMemory* pm;
	MotherBoard* mb;
	double price;

public:

	Computer();
	Computer(PhysicalMemory* pm, MotherBoard* mb);

	double setPrice();
	double getPrice() const;
	
};

