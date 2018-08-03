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

    //Display Reslut to user 
    cout << "Month " << " Int." << setw(8) << "Pay \t" << "Balance \n";
    while (balance >= 0) {
        cout << fixed << setprecision(2) << month << "   " << setw(8) << interestRate << setw(8) << payment << "\t" << balance << endl;
        month++;
        interestRate = APR / 100 / 12 * balance;
        balance = balance - payment + interestRate;
    }

    return 0;
}
