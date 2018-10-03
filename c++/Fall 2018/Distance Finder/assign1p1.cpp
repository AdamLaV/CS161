/**
  * @brief Assignment 1 Problem 1
  * @author Daidemang Francis
  */
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// distance finder function
void DistanceFinder(int inches);

int main()
{
    // get user input
    int inches;
    cout << "Enter the number of inches: ";
    cin >> inches;

    DistanceFinder(inches);


    return 0;
}

// distnace finder function
void DistanceFinder(int inches) {
    int remainder;
    double miles = inches / 63360;
    double yards = (inches % 63360) / 36;
    remainder = inches % 63360;
    double foot = (remainder % 36) / 12;
    double inches_ = inches % 12;

    cout << fixed << setprecision(0) << miles << " mile(s)" << "\n"
         << yards << " yard(s)" << "\n" << foot << " foot/feet" << "\n" << inches_ << " inch(es)" << endl;
}
