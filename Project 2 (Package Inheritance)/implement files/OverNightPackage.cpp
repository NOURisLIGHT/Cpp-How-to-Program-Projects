#include "..\header files\OverNightPackage.h"
#include <bits/stdc++.h>


using namespace std;
OverNightPackage::OverNightPackage(double feePerW, string name, string address, string city, int senderZip, int recieverZip, double weight, double cpw) : Package(name,address,city,senderZip,recieverZip,weight,cpw + feePerW)
{
    feePerWeight = feePerW;
}

double OverNightPackage::calculateCost()
{
    return (Package::calculateCost());
}

void OverNightPackage::displayDetails()
{
    Package::displayDetails();
    cout << "Fee Per Ounce: " << feePerWeight << endl;
}
