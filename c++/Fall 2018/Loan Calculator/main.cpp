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
        //double currentMonthPayment = payment;
        if(interest == 0 && balance > payment) {
            cout << fixed << setprecision(2) << month << "   " << setw(8) << "  "
                 << setw(8) << "  " << "\t" << balance << endl;

        }

        month++;
        interest = (APR / 100) / 12 * balance;

        else if(interest > 0 && balance > payment) {
            balance = balance - payment + interest;
            
        }
        else if (interest > 0 && balance < payment) {
            payment = balance + interest;
            balance = 0;
        }

        cout << fixed << setprecision(2) << month << "   " << setw(8) << interest
             << setw(8) << payment << "\t" << balance << endl;

        //month++;
        //interest = (APR / 100) / 12 * balance;
        //balance = balance - payment + interest;

//        if(interest > 0 && balance > payment) {
//            currentMonthPayment = payment;
//            balance = balance - payment + interest;
//        }
//        else if (interest < 0 && balance < payment) {
//            currentMonthPayment = balance + interest;
//            balance = 0.00;
//        }
    }

    return 0;
}
