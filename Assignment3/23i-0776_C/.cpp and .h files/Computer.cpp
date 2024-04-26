#include "Computer.h"
Computer::Computer(): pm(), mb() {}
Computer::Computer(PhysicalMemory* pm = nullptr, MotherBoard* mb = nullptr)
{
	this->pm = pm;
	this->mb = mb;
	this->price = setPrice();
}

double Computer::setPrice()
{
	return this->price = mb->getMBPrice() + pm->getPrice();

}

double Computer::getPrice() const { return this->price; }