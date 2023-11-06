#include <iostream>

using namespace std;

class CheckingAccount : public Account {
private:
    double feeCharged;
public:
    CheckingAccount(double initialBalance, double feePerCharge);
    void credit(double num);
    bool debit(double num);

};