/**
  * @brief Assignment 4
  * @author Daidemang Francis & Dakota Palmer
  */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    //Get Input from user
    double balance, payment, APR;
    cout << "Enter balance: ";
    cin >> balance;
    cout << "Enter payment: ";
    cin >> payment;
    cout << "Enter APR: ";
    cin >> APR;

    int month = 0;
    double interest = 0;
    //Compute interest and output result
    cout << "Month " << " Int." << setw(8) << "Pay \t" << "Balance \n";
    while (interest >= 0) {
        //double lastMonthPayment;
        if(interest <= 0) {
            cout << fixed << setprecision(2) << month << "   " << setw(8) << "  "
                 << setw(8) << "  " << "\t" << balance << endl;
        }
        else {
             cout << fixed << setprecision(2) << month << "   " << setw(8) << interest
                  << setw(8) << payment << "\t" << balance << endl;
        }

        month++;
        interest = (APR / 100) / 12 * balance;
        balance = balance - payment + interest;
    }

    return 0;
}
