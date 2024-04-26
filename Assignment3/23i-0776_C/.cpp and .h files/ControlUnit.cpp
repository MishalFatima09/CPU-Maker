#include "ControlUnit.h"


ControlUnit::ControlUnit()
{
	this->clock = 0;
}

ControlUnit::ControlUnit(float clock = 0) : clock(clock) {}

int ControlUnit::getClock() const
{
	return this->clock;
}

void ControlUnit::setClock(float time)
{
	this->clock = time;
}