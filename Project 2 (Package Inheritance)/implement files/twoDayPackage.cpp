#include "..\header files\twoDayPackage.h"
#include <bits/stdc++.h>


using namespace std;

twoDayPackage::twoDayPackage(double extraF, string name, string address, string city, int senderZip, int recieverZip, double weight, double cpw) : Package(name,address,city,senderZip,recieverZip,weight,cpw)
{
    extraFees = extraF;
}

double twoDayPackage::calculateCost()
{
    return (Package::calculateCost() + extraFees);
}

void twoDayPackage::displayDetails()
{
    Package::displayDetails();
    cout << "Extra fees: " << extraFees << endl;
}
