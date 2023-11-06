#include "..\headers\CheckingAccount.h"
#include <iostream>

using namespace std;
CheckingAccount::CheckingAccount(double initialBalance, double feePerCharge) : Account(initialBalance)
{
    if (feePerCharge >= 0)
        feeCharged = feePerCharge;
}

void CheckingAccount::credit(double num)
{
    Account::credit(num - feeCharged);
}

bool CheckingAccount::debit(double num)
{
    if (Account::debit(num))
    {
        Account::credit(num);
        Account::debit(num + feeCharged);
    }
}
