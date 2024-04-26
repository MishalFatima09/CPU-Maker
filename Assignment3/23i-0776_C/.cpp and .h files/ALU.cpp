#include"ALU.h"

ALU::ALU()
{
	this->NoOfAdders = 0;
	this->NoOfSubtractor = 0;
	this->NoOfRegisters = 0;
	this->sizeOfRegisters = 0;

}

ALU::ALU(int adders = 0, int subtractors = 0, int registers = 0, int size = 0)
{
	this->NoOfAdders = adders;
	this->NoOfSubtractor = subtractors;
	this->NoOfRegisters = registers;
	this->sizeOfRegisters = size;
}

int ALU::getNoOfAdders() const
{ return NoOfAdders; }

int ALU::getNoOfSubtractor() const
{return NoOfSubtractor; }

int ALU::getNoOfRegisters() const
{ return NoOfRegisters; }

int ALU::getsizeOfRegisters() const
{ return sizeOfRegisters; }

void ALU::setNoOfAdders(int adders)
{
	this->NoOfAdders = adders; 
}

void ALU::setNoOfSubtractor(int subtractors) 
{
	this->NoOfSubtractor = subtractors; 
}

void ALU::setNoOfRegisters(int registers) 
{
	this->NoOfRegisters = registers;
}

void ALU::setsizeofRegisters(int size) 
{ 	
	this->sizeOfRegisters = size; 
}