#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

string getInput(const string& prompt);
int strToInt(string digit);
int main()
{
  //  int b = atoi(cardNumber.c_str());
   // cout << "You Entered " << b + 2 << endl;

    string cardnumber = getInput("Enter Card Number: ");
    int cardDigits = strToInt(cardnumber);
    cout << cardDigits << endl;

    return 0;
}

// Takes in a string, prints it then get input and returns the input
string getInput(const string& prompt) {
    cout << prompt;
    string cardNumber;
    cin >> cardNumber;
    return cardNumber;
}

// Turns a string like '3333' into the number it represents (3333)
int strToInt(string digits) {
    int stringDigit = atoi(digits.c_str());
    return stringDigit;
}
