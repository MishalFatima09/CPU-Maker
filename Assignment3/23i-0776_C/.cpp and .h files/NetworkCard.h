#pragma once
#include<string>
#include<iostream>

using namespace std;
class NetworkCard
{
	string type;
	int speed;
	double price = 2500;
public:
	NetworkCard();
	NetworkCard(string type, int speed);

	double getPrice() const;

	void input();
};

