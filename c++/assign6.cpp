#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

string getInput(const string& prompt);
string getCardType(const string& cardNumber);
int strToInt(string digit);
bool isValid(const string& cardNumber);

int main()
{

    string cardnumber = getInput("Enter Card Number: ");
    string cardnumberType = getCardType(cardnumber);
    bool cardNumberValid = isValid(cardnumber);
    if(cardNumberValid == true) {
        cout << "Valid Number, " << cardnumberType << endl;
    }
    else {
        cout << "Not a Valid Number, " << cardnumberType << endl;
    }

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
        cardType = "UNKNOWN ISSUER";
    }
    return cardType;
}

// Returns true/false indicating if a credit card number is potentially a valid number...
bool isValid(const string& cardNumber) {
    bool validNumber = false;
    if(cardNumber.at(0) == '1') {
        validNumber = true;
    }

    return validNumber;
}

// Turns a string like '3333' into the number it represents (3333)
int strToInt(string digits) {
    int stringDigit = atoi(digits.c_str());
    return stringDigit;
}

