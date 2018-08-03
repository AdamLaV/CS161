#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    //Get Input from user
    int month = 0;
    double balance, payment, APR, interestRate;
    cout << "Enter balance: ";
    cin >> balance;
    cout << "Enter payment: ";
    cin >> payment;
    cout << "Enter APR: ";
    cin >> APR;

    //Compute interest
    interestRate = APR / 12;
    cout << "Month " << " Int." << setw(8) << "Pay \t" << "Balance \n";

    while (balance >= 0) {
        cout << month << "   " << setw(8) << interestRate << setw(8) << payment << "\t" << balance << endl;
        balance = balance - payment + interestRate;
        month++;
    }

    return 0;
}
