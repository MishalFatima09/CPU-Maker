#pragma once
#include "Case.h"
#include "Computer.h"
#include "Battery.h"
#include "PowerSupply.h"
class ComputerAssembly
{
	Case cover;
	Computer computer;
	Battery battery;
	PowerSupply PSU;
	double total;
public: 
	ComputerAssembly();
	ComputerAssembly(Case cover, Computer computer, Battery battery, PowerSupply PSU);

	void setPrice();
	double getPrice();
};

