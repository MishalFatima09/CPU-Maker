#include "Case.h"
Case::Case() {
	this->formFactor = "";
	this->color = "";
	//this->type = "";
}

Case::Case(string ff = "", string color = "")
{
	this->formFactor = ff;
	this->color = color;
	//this->type = type;
	this->price = setPrice();
}

void Case::setColor(string color) { this->color = color; }
string Case::getColor() const { return this->color; }

//void Case::setType(string type) { this->type = type; }
//string Case::getType() const { return this->type; }

void Case::setformFactor(string ff) { this->formFactor = ff; }
string Case::getformFactor() const { return this->formFactor; }



double Case::setPrice()
{
		if (this->formFactor == "ATX")
			return this->price = 600;
		else// if (this->formFactor == "microATX")
			return this->price = 900;
	
}

void Case::getInput()
{
	while (true) {
		cout << "What kind of form factor would you like? (ATX / microATX)" << endl;
		cin >> this->formFactor;
		if (formFactor == "ATX" || formFactor == "microATX")
			break;

		else {
			cerr << "invalid, pls enter either 'ATX' or 'microATX'." << endl;
			cin.clear();
		}
	}
	this->price = setPrice();

	cout << "What color would you like?" << endl;
	cin >> this->color;

}


double Case::getPrice() const
{
	return this->price;
}