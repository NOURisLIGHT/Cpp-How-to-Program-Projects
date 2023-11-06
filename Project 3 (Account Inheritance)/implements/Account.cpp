#include "..\headers\Account.h"
#include <iostream>

using namespace std;

Account::Account(double initialBalance)
{
    if (initialBalance >= 0)
        accountBalance = initialBalance;
    else
        accountBalance = 0.0;
}

void Account::credit(double num)
{
    accountBalance += num;
    cout << "Added sucessfully to you Balance: " << num << "\n";
}

bool Account::debit(double num)
{
    if (num > accountBalance)
    {
        cout << "Debit about exceeded account balance!" << endl;
        return false;
    }
    else
    {
        accountBalance -= num;
        return true;
    }
        
}

double Account::getBalance()
{
    return accountBalance;
}
