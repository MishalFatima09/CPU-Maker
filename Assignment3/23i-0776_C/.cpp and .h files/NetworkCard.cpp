#include "NetworkCard.h"


NetworkCard::NetworkCard() {
	this->type = "";
	this->speed = 0;
}

NetworkCard::NetworkCard(string type = "", int speed = 0)
{
	this->type = type;
	this->speed = speed;
}

double NetworkCard:: getPrice() const { return this->price; }

void NetworkCard::input() 
{
    while (true) {
        cout << "What kind of network card would you like? (ethernet/Wifi)" << std::endl;
        cin >> type;
        if (type == "ethernet" || type == "Wifi")
            break;

        else {
            cerr << "invalid, pls enter either 'ethernet' or 'Wifi'." << std::endl;
            cin.clear();
        }
    }

}