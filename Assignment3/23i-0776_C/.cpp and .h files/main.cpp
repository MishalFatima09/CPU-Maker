#include"NetworkCard.h"
#include<iostream>
#include<string>
#include"inputs.h"
#include"GraphicsCard.h"
#include"MainMemory.h"
#include"StorageDevice.h"
#include"AppleGPU.h"
#include "CPU.h"
#include"MotherBoard.h"
#include"PhysicalMemory.h"
#include"Computer.h"
#include"Case.h"
#include"PowerSupply.h"
#include"Battery.h"
#include "ComputerAssembly.h"
using namespace std;
//MishalFatima
//23i-0776
//Section C
//TAS:
//Muhammad Mohsin Ramzan
//Zain Ul Abideen
//Muhammad Nouman Amjad
//Husnain Ali
//Muhammad Abdur Rafey
//Muhammad Ariyan
int main()
{
    //taking input for type of computer
    string form = formInput();
    //type of processor
    string processor = processorInput();


    //i feel like this is pretty self explanatory
    GraphicsCard GP;
    CPU mycpu;
    if (processor == "intel")
    {   
        GP.input();
        cout<< GP.getBrand()<<endl;
        cout << endl;
        cout << "Price of graphics card is " << GP.getPrice() << endl;

    }
    //since AppleGPU is being composed it will only be made if the user decides that they 
    //a mac laptop/pc
    if (processor == "mac")
    {
        AppleGPU appleGPU; 
        CPU mycpu( 0,0,0,0,0,0, appleGPU); 
        cout << "Your Apple GPU has been integrated." << endl;
        cout << "The price is " << mycpu.getPrice() << endl;
    }
    //every computer has a main memory
    MainMemory m;
    m.input();
    cout << endl;
    cout << "Price of main memory is " << m.getPrice() << endl;
    //deciding if the user needs the storage device even
    char storageNeed;
    cout << "Would you like to add a Storage Device? (y/n)" << endl;
    cin >> storageNeed;
    StorageDevice sd;
    if(storageNeed == 'y')
    { 
        
        sd.input();
        cout << endl;
        cout << "Price of storage device is " << sd.getPrice() << endl;
    }
    //some people dont need network cards
    char networkCardneed;
    cout<< "Would you like to add a Network Card? (y/n)" << endl;
    cin >> networkCardneed;
    NetworkCard nc;
    if (networkCardneed == 'y')
    {
        nc.input();
        cout << endl;
        cout << "Price of network card is " << nc.getPrice() << endl;
    }
    cout << "Alrighty, onto the motherboard" << endl;
    int numPorts = numportsinput();
    
    //asking for input of ports
    string type = PortTypeInput();
    int baudRate = portBaudRate();

    MotherBoard mb(numPorts,type,baudRate, &sd, &nc, &GP, &mycpu, &m);
    cout << "Your mother board would cost around ";
    cout << mb.getMBPrice() << endl;;

    PhysicalMemory pm;
    pm.physicalMemoInput();
    //Making a computer object and passing it the porper parameters
    Computer computer(&pm, &mb);
    cout << "Your computer would cost around " << computer.getPrice() << endl;
    //bhai kya bataun isska itna obvious hai
    cout << "Finally, the exteriors!" << endl;
    Case exterior;
    PowerSupply PSU;
    caseInput(form);
    if (form == "pc")
    {
        exterior.getInput();
        cout << "Your case would cost somewhere around " << exterior.getPrice()<<endl;
        PSU.getInput();
    }

    Battery battery;
    if (form == "laptop" || form == "tablet")
    {
        cout << "However, you would need a battery " << endl;
        battery.getInput();
    }
    //finally computer bann gaya maaf krdo pls
    ComputerAssembly finalComputer(exterior, computer, battery, PSU);
    //total bill wow barri mehengaayi hai bhai
    cout << "--------------------------------------------" << endl;
    cout << "Your total bill totals to be $" << finalComputer.getPrice() << endl;
    cout << "--------------------------------------------" << endl;

	return 0;
}