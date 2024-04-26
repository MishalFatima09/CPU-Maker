#include "PowerSupply.h"


PowerSupply:: PowerSupply()
{
    this->wattage = 0;
    this->efficiencyRating = "";
}

PowerSupply:: PowerSupply(int wattage = 0, string efficiencyRating = "")
{
    this->wattage = wattage;
    this->efficiencyRating = efficiencyRating;
   
}

void PowerSupply::getInput()
{
    cout << "What wattage of power supply would you like? (0-1000)" << endl;
    cin >> this->wattage;

    while (true) {
        if (wattage >= 0 && wattage <= 1000 && wattage % 100 == 0) {
            break;
        }
        else {
            cerr << "Invalid input. Please enter a baud rate within the range of 0 to 1000." << endl;
            cout << "What baud rate do you want? (0-1000 )" << endl;
            cin >> this->wattage;
        }
    }

    cout << "What sort of efficiency rating? (80 Plus Bronze/ 80 Plus Gold)" << endl;
    cin >> this->efficiencyRating;
    //while (true) {
    //    if (efficiencyRating == "80 plus bronze" || efficiencyRating == "80 plus gold") {
    //        break;
    //    }
    //    else {
    //        cerr << "Sorry we only have these two at the moment, pls choose one of them(80 Plus Bronze/ 80 Plus Gold)." << endl;
    //       /* cout << "What baud rate do you want? (0-480 Mbps)" << endl;*/
    //        cin >> this->efficiencyRating;
    //    }
    //}

    setPrice();

}

void PowerSupply:: setPrice()
{
    if (wattage == 100)
        this->price = 10;
    else if (wattage == 200)
        this->price = 200;
    else if (wattage == 300)
        this->price = 30;
    else if (wattage == 400)
        this->price = 400;
    else if (wattage == 500)
        this->price = 500;
    else if (wattage == 600)
        this->price = 600;
    else if (wattage == 700)
        this->price = 700;
    else if (wattage == 800)
        this->price = 800;
    else if (wattage == 900)
        this->price = 900;
    else if (wattage == 100)
        this->price = 1000;
}

double PowerSupply::getPrice()
{
    return this->price;
}