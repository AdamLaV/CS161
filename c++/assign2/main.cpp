#include <iostream>

using namespace std;

int main()
{
    double gpa;
    int sat;

    //Get user input
    cout << "Enter GPA: ";
    cin >> gpa;

    //Check condition -- GPA 4.0
    if (gpa >= 4.0) {
        cout << "Admit" << endl;
    }

    //GPA 3.5-3.99
    else if (gpa >= 3.5) {
        cout << "Enter SAT: ";
        cin >> sat;
        if (sat > 1400) {
            cout << "Admit" << endl;
        }
        else if (sat >= 1100) {
            cout << "Waitlist" << endl;
        }
        else if (sat < 1100) {
            cout << "Deny" << endl;
        }
    }

    //GPA 3.0-3.49
    else if (gpa >= 3.0) {
        cout << "Enter SAT: ";
        cin >> sat;
        if (sat > 2000) {
            cout << "Admit" << endl;
        }
        else if (sat >= 1500) {
            cout << "Waitlist" << endl;
        }
        else if (sat < 1500) {
            cout << "Deny" << endl;
        }
    }

    //GPA below 3.0
    else if (gpa < 3.0) {
        cout << "Enter SAT: ";
        cin >> sat;
        if (sat >= 2300) {
            cout << "Admit" << endl;
        }
        else if (sat < 2300) {
            cout << "Deny" << endl;
        }
    }
}
