#include <iostream>
#include <string>
//#include <algorithm> // std::reverse
#include "cradFunctions.h"
using namespace std;

// getCardType function
string getCardType(const string& cardNumber) {
    string cardType = "unknown issuer";

    if(cardNumber.at(0) == '4') {
        cardType = "Visa";
    }
    else if (cardNumber.at(0) == '5') {
        cardType = "MasterCrad";
    }
    else if ((cardNumber.at(0) == '3') && (cardNumber.at(1) == '4' || cardNumber.at(1) == '7')) {
        cardType = "American Express";
    }
    return cardType;
}

// isValid function
bool isValid(const string& cardNumber) {
    bool status;
    int getCardSum = luhnDigitSum(cardNumber);
    if(getCardSum % 10 == 0) {
        status = true;
    }
    else {
        status = false;
    }
    return status;
}

// luhnDigitSum function
int luhnDigitSum(const string& cardNumber) {
    int evenSum = 0, oddSum = 0, sum = 0, cardDigit;
    for(int i = cardNumber.length() - 1; i >= 0; i -= 2) {
        cardDigit = charToInt(cardNumber[i]);
        oddSum += cardDigit;
    }

    for(int i = cardNumber.length() - 2; i >= 0; i -= 2) {
        cardDigit = charToInt(cardNumber[i]);
        evenSum += doubleDigitValue(cardDigit);
    }
    sum += evenSum + oddSum;
    return sum;
}

// charToInt function
int charToInt(char digit) {
    int digitNumber = digit - '0';
    return digitNumber;
}

// doubleDigitValue function
int doubleDigitValue(int number) {
    int total = 0, sum = 0;
    total = number * 2;
    if(total < 5) {
        sum += total;
    }
    else if (total >= 5) {
        int lastNum, firstNum;
        lastNum = total / 10;
        firstNum = total % 10;

        sum += firstNum + lastNum;
    }

    return sum;
}
