#include <bits/stdc++.h>

using namespace std;

class Package {
private:
    string name, address, city;
    int senderZipCode, recieverZipCode;
    double weight, costPerWeight;
public:
    Package();
    Package(string name, string address, string city, int senderZip, int recieverZip, double weight, double cpw);
    virtual double calculateCost(); // Override this in child classes
    void displayDetails(); // Override this in child classes
};