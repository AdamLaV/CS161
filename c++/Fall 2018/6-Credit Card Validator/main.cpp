 #include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

string getInput(const string& prompt);
string getCardType(const string& cardNumber);
int charToInt(char digit);
bool isValid(const string& cardNumber);
int sumOfDigits(const string& CardNumber);
int doubleDigitValue(int number);

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

    int num = sumOfDigits(cardnumber);
    cout << num << endl;

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
int charToInt(char digit) {
    int charDigit = digit-'0';
    return charDigit;
}

// Sums the digits of a credit card number
int sumOfDigits(const string& CardNumber) {
    int cardDigits, sum = 0, evenSum = 0, oddSum = 0;
    int myArray[16];

    // loop backwards through cardNumber
    for(int i = CardNumber.length(); i >= 0; i--) {
        cardDigits = charToInt(CardNumber.at(i));
        myArray[i] = cardDigits;
    }

    for(int i = CardNumber.length() - 1; i >= 0; i--) {
        int p;
        int num = myArray[i];
        if(i % 2 == 0) {
            p = num * 2;
            if(p > 9) {
                p = p - 9;
                evenSum += p;
            }
            else {
                p = num;
                oddSum += p;
            }
        }

        sum = evenSum + oddSum;
       // cout << sum << endl;
    }

    return sum;
}

//Process a number to be doubled
int doubleDigitValue(int number) {
    int myArray = number;
    return myArray;

}

