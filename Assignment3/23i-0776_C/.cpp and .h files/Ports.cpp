#include "Ports.h"

Ports::Ports() : type(""), baud_rate(0) {}


Ports::Ports(string type, int baud_rate)
{
	this->type = type;
	this->baud_rate = baud_rate;

}

string Ports:: getType() const { return this->type; }
void Ports::setType(string type) { this->type = type; }

int Ports::getBaudRate() const { return this->baud_rate; }
void Ports::setBaudRate(int baud_rate) { this->baud_rate = baud_rate; }

double Ports::getPrice()
{
	return this->price;
}

Ports& Ports::operator=(const Ports& other)
{
    if (this != &other) {
        this->type = other.type;
        this->baud_rate = other.baud_rate;
    }
    return *this;
}
