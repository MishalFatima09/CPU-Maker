#pragma once
#include"GraphicsCard.h"
class AppleGPU : public GraphicsCard
{
	int price = 10;
public:
		AppleGPU();
	void setPrice();
	double getPrice() const;
};

