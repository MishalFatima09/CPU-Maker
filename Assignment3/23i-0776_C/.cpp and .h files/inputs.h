#pragma once
#include<iostream>
#include<string>
using namespace std;

string formInput() {
    string form;
    while (true) {
        cout << "What kind of computer would you like? (pc and laptop/ tablet)" << endl;
        cin >> form;
        if (form == "pc" || form == "laptop" || form == "tablet")
            break;

        else {
            cerr << "invalid, pls enter either 'pc' or 'laptop'." << endl;
            cin.clear();
        }
    }
    return form;
}

string processorInput() 
{
    string processor;
    while (true) {
        cout << "What kind of processor would you like? (intel/ mac)" << endl;
        cin >> processor;
        if (processor == "intel" || processor == "mac")
            break;

        else {
            cerr << "invalid, pls enter either 'intel' or 'mac'." <<endl;
            cin.clear();
        }
        
    }
    return processor;
}

int numportsinput()
{
    int num;
    while (true) {
        cout << "How many ports would you like? (around 4 to 8)" << endl;
        cin >> num;
        if (num >= 4|| num <= 8)
            break;

        else {
            cerr << "invalid, pls enter ports within limit" << endl;
            cin.clear();
        }

    }
    return num;
}

string PortTypeInput() 
{
    string type;
    cout << "What kind of port would you like? (VGI Port, I/O Port, USB Port, HDMI Port)" << endl;
        cin >> type;
        return type;
}

int portBaudRate() {
    int bd;
    cout << "What baud rate do you want? (0-480 Mbps)" << endl;
    cin >> bd;

    while (true) {
        if (bd >= 0 && bd <= 480) {
            break;
        }
        else {
            cerr << "Invalid input. Please enter a baud rate within the range of 0 to 480 Mbps." << endl;
            cout << "What baud rate do you want? (0-480 Mbps)" << endl;
            cin >> bd;
        }
    }
    return bd;
}

void caseInput(string form)
{
    if (form == "pc")
        cout << "Tell us about how you'd like to customize your pc case" << endl;
    else
        cout << "Since you bought a laptop/tablet it does not require a case" << endl;
}