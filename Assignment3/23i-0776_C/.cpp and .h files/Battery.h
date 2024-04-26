#pragma once
class Battery
{
    int capacity;
    double price;
public:
    Battery();

    Battery(int capacity);

    void getInput();

    double setPrice();
    double getPrice();
};

