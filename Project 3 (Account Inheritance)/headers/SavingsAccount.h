#include <iostream>

using namespace std;

class SavingsAccount : public Account {
private:
    double interestRate;
public:
    SavingsAccount(double initialBalance, double interest);
    double calculateInterestRate();
};