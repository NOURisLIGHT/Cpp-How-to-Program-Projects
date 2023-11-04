#include <bits/stdc++.h>

using namespace std;

class twoDayPackage : public Package {
private:
    double extraFees;
public:
    twoDayPackage(double extraF, string name, string address, string city, int senderZip, int recieverZip, double weight, double cpw);
    double calculateCost();
    void displayDetails();

};