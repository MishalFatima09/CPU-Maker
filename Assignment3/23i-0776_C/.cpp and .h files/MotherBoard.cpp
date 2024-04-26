#include "MotherBoard.h"


MotherBoard::MotherBoard() : port(), storageDevice(), networkCard(), graphicsCard(), cpu(), mainMemory()
{}

MotherBoard::MotherBoard(int numPorts = 1, string type = "", int baudRate = 0, StorageDevice* storageDevice = nullptr,
	NetworkCard* networkCard = nullptr,
	GraphicsCard* graphicsCard = nullptr,
	CPU* cpu = nullptr,
	MainMemory* mainMemory = nullptr)
{
	this->port = new Ports * [numPorts];
	for (int i = 0; i < numPorts; i++)
	{
		port[i] = new Ports(type, baudRate);
	}

	this->storageDevice = storageDevice;
	this->networkCard = networkCard;
	this->graphicsCard = graphicsCard;
	this->cpu = cpu;
	this->mainMemory = mainMemory;
	this->mbPrice = setMBPrice();
}

double MotherBoard::setMBPrice() 
{
	this->mbPrice += storageDevice->getPrice() + networkCard->getPrice() +
		graphicsCard->getPrice() + mainMemory->getPrice() + cpu->getPrice();

	//for (int i = 0; i < numPorts; ++i) {
	//	this->mbPrice += port[i].getPrice();
	//}

	return this->mbPrice;
}

double MotherBoard::getMBPrice() const { return this->mbPrice; }
MotherBoard::~MotherBoard()
{
	for (int i = 0; i < numPorts; i++) {
		delete port[i];
	}
	delete[] port;

}