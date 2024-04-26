#pragma once
#include<string>
#include<iostream>
using namespace std;
class Ports
{
	string type; //VGI Port,I/O Port,USB Port,HDMI Port etc
	int baud_rate;
	double price = 10;
public:
	Ports();

	Ports(string type, int baud_rate);

	Ports& operator=(const Ports& other);

	string getType() const; 
	void setType(string type); 

	int getBaudRate() const; 
	void setBaudRate(int baud_rate); 

	double getPrice();

	//void typeInput();

};

