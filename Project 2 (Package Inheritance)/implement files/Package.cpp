#include "..\header files\Package.h"

Package::Package()
{
    name = "";
    address = "";
    city = "";
    senderZipCode = 0;
    recieverZipCode = 0;
    weight = 0.0;
    costPerWeight = 0.0;
}

Package::Package(string Name, string Address, string City, int senderZip, int recieverZip, double Weight, double cpw)
{
    name = Name;
    address = Address;
    city = City;
    senderZipCode = senderZip;
    recieverZipCode = recieverZip;
    weight = Weight;
    costPerWeight = cpw;
}

double Package::calculateCost()
{
    return weight * costPerWeight;
}

void Package::displayDetails()
{
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "City: " << city << endl;
    cout << "sender Zip Code: " << senderZipCode << endl;
    cout << "reciever Zip Code: " << recieverZipCode << endl;
    cout << "Weight: " << weight << endl;
    cout << "Cost Per Weight: " << costPerWeight << endl;
}
