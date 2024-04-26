#pragma once


#include"ALU.h"
#include "ControlUnit.h"
#include"AppleGPU.h"

class CPU
{
	ALU alu;
	ControlUnit cu;
	//integrating apple gpu? what do i intialize it with in such a way that when i 
	// choose only then the apple gpu is made otherwise it should be standard set 
	// to the intel graphics card??? confushan
	AppleGPU agpu; //????????
	double price;

public:
	CPU();

	CPU(int adders, int subtractors, int registers, int size, float time, 
		double price, AppleGPU agp);
	
	double getPrice() const;
	void display();

};

