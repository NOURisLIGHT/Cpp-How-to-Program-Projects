#include <bits/stdc++.h>
#include "implement files\Package.cpp"
#include "implement files\twoDayPackage.cpp"
#include "implement files\OverNightPackage.cpp"


using namespace std;


int main() {
    Package p1("AAA", "6th-October", "Giza", 123, 456, 60, 3.5);
    p1.displayDetails();
    cout << "Cost = " << p1.calculateCost() << endl;
    cout <<endl;

    twoDayPackage td2(5, "BBB", "Haram", "Giza", 789, 123, 30, 2);
    td2.displayDetails();
    cout << "Cost = " << td2.calculateCost() << endl;
    cout << endl;

    OverNightPackage onp(2, "CCC","Faisal", "Giza", 456, 789, 80, 3);
    onp.displayDetails();
    // Error here: the calculate cost doesn't calculate the right numbers
    cout << "Cost = " << onp.calculateCost() << endl;
    cout << endl;
}