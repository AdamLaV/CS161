/**
  * @brief Assignment 1 Problem 1
  * @author Francis
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

    // compute result with distance finder function 
    DistanceFinder(inches);

    return 0;
}

// distance finder function
void DistanceFinder(int inches) {
    const double mi = 0.000015783, yd = 0.027778, ft = 0.083333;
    double miles = inches * mi;
    double yards = inches * yd;
    double foot = inches * ft;

    cout << fixed << setprecision(0) << miles << " mile(s)" << "\n"
         << yards << " yard(s)" << "\n" << foot << " foot/feet" << "\n" << inches << " inch(es)" << endl;
}
