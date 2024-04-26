#include "ComputerAssembly.h"


ComputerAssembly::ComputerAssembly() : cover(), computer(), battery(), PSU() {}

ComputerAssembly::ComputerAssembly
(Case cover, Computer computer, Battery battery, PowerSupply PSU) 
{
	this->cover = cover;
	this->computer = computer;
	this->battery = battery;
	this->PSU = PSU;
}

void ComputerAssembly::setPrice()
{
	this->total = cover.getPrice() + computer.getPrice() + battery.getPrice() + PSU.getPrice();
	//return this->total;
}
double ComputerAssembly::getPrice() 
{
	/*cout << cover.getPrice() << endl;
	cout << computer.getPrice() << endl;
	cout << battery.getPrice() << endl;
	cout << PSU.getPrice() << endl;*/
	setPrice();
	return this->total;
}