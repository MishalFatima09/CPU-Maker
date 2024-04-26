#pragma once
#include<string>
#include<iostream>
using namespace std;
class Case
{
	string formFactor;
	string color;
	double price = 0;
	//string type;

public:
	Case();
	Case(string ff, string color);

	void setColor( string color);
	string getColor() const;


	void setformFactor( string ff);
	string getformFactor() const;
	

	double setPrice();

	double getPrice() const;
	void getInput();
};

