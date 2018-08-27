#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

string getInput(const string& prompt);
string getCardType(const string& cardNumber);
int strToInt(string digit);
int main()
{

    string cardnumber = getInput("Enter Card Number: ");
   // int cardDigits = strToInt(cardnumber);
    //cout << cardDigits << endl;
    string cardnumberType = getCardType(cardnumber);
    cout << cardnumberType << endl;

    return 0;
}

// Takes in a string, prints it then get input and returns the input
string getInput(const string& prompt) {
    cout << prompt;
    string cardNumber;
    cin >> cardNumber;
    return cardNumber;
}

// Return a string representing the type of crdit card a number is: VISA, MASTERCARD, AMERICAN EXPRESS, OR UNKNOWN
string getCardType(const string& cardNumber) {
    string cardType = "";
    if(cardNumber.at(0) == '4') {
        cardType = "VISA";
    }
    else if (cardNumber.at(0) == '5') {
        cardType = "MASTERCARD";
    }
    else if (cardNumber.at(1) == '4' || (cardNumber.at(1) == '7' && cardNumber.at(0) == '3')) {
        cardType = "AMERICAN EXPRESS";
    }
    else {
        cardType = "UNKNOWN";
    }
    return cardType;
}

// Turns a string like '3333' into the number it represents (3333)
int strToInt(string digits) {
    int stringDigit = atoi(digits.c_str());
    return stringDigit;
}

