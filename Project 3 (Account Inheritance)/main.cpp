#include "implements\Account.cpp"
#include "implements\SavingsAccount.cpp"
#include "implements\CheckingAccount.cpp"

#include <iostream>

using namespace std;

int main()
{
    // Account A1(15);
    // cout << A1.getBalance() << endl;
    // Account A2(-5);
    // cout << A2.getBalance() << endl;
    // A2.credit(20);
    // A2.debit(15);
    // cout << A2.getBalance() << endl;

    // SavingsAccount sa1(15, 3);
    // cout << sa1.calculateInterestRate() << endl;
    // sa1.credit(15);
    // sa1.debit(30);
    // cout << sa1.getBalance() << endl;

    CheckingAccount ca1(15, 2);
    cout << ca1.getBalance() << endl;
    ca1.credit(50); // 15 + 50 - 2 = 63
    cout << ca1.getBalance() << endl;
    ca1.debit(30); // 63 - 30 - 2 = 31;
    cout << ca1.getBalance() << endl;
}