#include "..\headers\SavingsAccount.h"
#include <iostream>

using namespace std;

SavingsAccount::SavingsAccount(double initialBalance, double interest) : Account(initialBalance)
{
    if (interest >= 0)
        interestRate = interest;
}

double SavingsAccount::calculateInterestRate()
{
    return Account::getBalance() * interestRate;
}

