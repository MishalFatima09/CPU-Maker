#include "AppleGPU.h"

AppleGPU::AppleGPU() : GraphicsCard()
{}

void AppleGPU:: setPrice()
{
	this->price = 0;
}

double AppleGPU::getPrice() const { return this->price; }