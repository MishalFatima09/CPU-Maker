#pragma once
class ControlUnit
{
private:
	float clock;
public:
	ControlUnit();
	ControlUnit(float clock);

	int getClock() const;
	void setClock(float time);
};

