#pragma once
#include<iostream>
#include<string>
using namespace std;
class PowerSupply
{
    int wattage;
    string efficiencyRating;
    double price = 0;
public:
    PowerSupply();
    
    PowerSupply(int wattage, std::string efficiencyRating);

    void getInput();

    void setPrice();
    double getPrice();
    
};

