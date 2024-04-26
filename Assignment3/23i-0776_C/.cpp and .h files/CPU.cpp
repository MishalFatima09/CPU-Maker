#include "CPU.h"


CPU:: CPU() : alu(), cu(), price(0), agpu()
{
}

CPU::CPU(int adders = 0, int subtractors = 0, int registers = 0,
	int size = 0, float time = 0, double price = 0, AppleGPU agp = AppleGPU())
{
	alu.setNoOfAdders(adders);
	alu.setNoOfRegisters(registers);
	alu.setNoOfSubtractor(subtractors);
	alu.setsizeofRegisters(registers);

	cu.setClock(time);
	this->price = 55000;
	this->agpu = agp;
}

void CPU::display()
{
	cout << "CPU has been made"<<endl;
}

double CPU::getPrice() const
{
	return this->price;
}