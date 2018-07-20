/**
  * @brief Assignment 1 Problem 1
  * @author Daidemang Francis
  */
#include <iostream>

using namespace std;

int main()
{
    //Get input from user
    int fourDigitInt;
    cout << "Enter a four digit integer: ";
    cin >> fourDigitInt;

    //Display result
    cout << fourDigitInt % 10 << endl;

    fourDigitInt /= 10;
    cout << fourDigitInt % 10 << endl;

    fourDigitInt /= 10;
    cout << fourDigitInt % 10 << endl;

    fourDigitInt /= 10;
    cout << fourDigitInt % 10 << endl;

    return 0;
}
