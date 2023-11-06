#include <iostream>

using namespace std;

class Account {
private:
    double accountBalance;
public:
    Account(double initialBalance);
    virtual void credit(double num);
    virtual bool debit(double num);
    double getBalance();

};