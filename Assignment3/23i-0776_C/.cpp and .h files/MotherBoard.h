#pragma once
#include"NetworkCard.h"
#include"StorageDevice.h"
#include"GraphicsCard.h"
#include"CPU.h"
#include"Ports.h"
#include"MainMemory.h"

class MotherBoard
{
	Ports** port;
	int numPorts;
	StorageDevice* storageDevice;
	NetworkCard* networkCard;
	GraphicsCard* graphicsCard;
	CPU* cpu;
	MainMemory* mainMemory;
	double mbPrice;
public:
	MotherBoard();
	//MotherBoard(Ports* port, StorageDevice* storageDevice, NetworkCard* networkCard, GraphicsCard* graphicsCard, CPU* cpu, MainMemory* mainMemory);

	MotherBoard(int numPorts, string type, int baudRate, StorageDevice* storageDevice,
		NetworkCard* networkCard,
		GraphicsCard* graphicsCard,
		CPU* cpu,
		MainMemory* mainMemory);

	double setMBPrice();
	double getMBPrice() const;

	~MotherBoard();

};

