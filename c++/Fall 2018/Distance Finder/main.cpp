#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int getMiles(int inches);
int getYards(int inches);
int getFeet(int inches);

int main()
{
    // get user input
    int inches;
    cout << "Enter the number of inches: ";
    cin >> inches;
    double miles = getMiles(inches);
    double yards = getYards(inches);
    double foot = getFeet(inches);
    cout << fixed << setprecision(0) << miles << " mile(s)" << "\n"
         << yards << " yard(s)" << "\n" << foot << " foot/feet";


    return 0;
}

// miles function
int getMiles(int inches) {
    const double mi = 0.000015783;
    double miles;
    miles = inches * mi;

    return miles;
}

// yards function
int getYards(int inches) {
    const double yd = 0.027778;
    double yards = inches * yd;

    return yards;
}

// foot/feet function
int getFeet(int inches) {
    const double ft = 0.083333;
    double foot = inches * ft;

    return foot;
}
