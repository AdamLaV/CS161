/**
  * @brief Assignment 1 Problem 2
  * @author Daidemang Francis
  */
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x1, x2, x3, s, area;
    //Get input
    cout << "Enter x1 value: ";
    cin >> x1;

    cout << "Enter x2 value: ";
    cin >> x2;

    cout << "Enter x3 value: ";
    cin >> x3;

    s = (x1 + x2 + x3) / 2;
    //cout << s;

    area = sqrt(s*(s - x1)*(s - x2)*(s - x3));

    cout << "The area of the tringle is: " << area << endl;

    return 0;
}
