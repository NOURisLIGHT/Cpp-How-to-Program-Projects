#include <bits/stdc++.h>

using namespace std;

class OverNightPackage : public Package{
private:
    double feePerWeight;
public:
    OverNightPackage(double feePerW, string name, string address, string city, int senderZip, int recieverZip, double weight, double cpw);
    double calculateCost();
    void displayDetails();
};