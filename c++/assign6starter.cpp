/**
  * @brief Assignment 6
  * @author Daidemang Francis & Dakota Palmer
*/
#include <iostream>
#include "cardFunctions.h"
#include <string>
using namespace std;

int main()
{

// ----------- Function building + testing Part A ------------- \\
//      string test1 = getCardType(cardNumber);
//      cout << test1;
//      bool status = isValid(cardNumber);
//      cout << status;

//      string test2 = luhnDigitSum(cardNumber);
//      cout << test2 << endl;

//    int test3 = luhnDigitSum(cardNumber);
//    cout << test3 << endl;
//    cout << "Enter charValue: ";
//    cin >> test4p1;
//    cout << "Enter charValue: ";
//    cin >> test4p2;
//    char test4p1 = '3', test4p2 = '3';
//    int test4Total = 0;
//    test4Total += charToInt(test4p1);
//    test4Total += charToInt(test4p2);
//    cout << test4Total << endl;

//    int testResult = doubleDigitValue(4);
//    cout << testResult << endl;
// ----------------------- end testing ------------------ \\


// ----------- Final Program ------------- \\

    // Get user input
    string cardNumber;
    cout << "Enter card number: ";
    cin >> cardNumber;

    // validate card number
    string cardType = getCardType(cardNumber);
    bool status = isValid(cardNumber);

    if(status == 1) {
        cout << "Valid number, " << cardType << endl;
    }
    else {
        cout << "Not a valid number, " << cardType << endl;
    }

    return 0;
}
