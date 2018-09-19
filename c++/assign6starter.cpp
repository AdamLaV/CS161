#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

string getInput(const string& prompt);
string getCardType(const string& cardNumber);
int sumOfDigits(const string& cardNumber);
int charToInt(char digit);

int main()
{
    string card = getInput("Enter Card Number: ");
    string cardType = getCardType(card);
    cout << card << " " << cardType << endl;

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

// sum of digit
int sumOfDigits(const string& cardNumber) {
    int total_num = cardNumber.length();
    int card[total_num];
    int sum = 0;

    for(int i = 0; i < total_num; i++) {
        card[i] = charToInt(cardNumber[i]);
        sum += card[i];
    }
    return sum;
}

// charToInt
int charToInt(char digit) {
    int digitValue = digit - '0';
    return digitValue;
}
