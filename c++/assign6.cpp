#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

string getInput(const string& prompt);

int main()
{
  //  int b = atoi(cardNumber.c_str());
   // cout << "You Entered " << b + 2 << endl;

    string cardnumber = getInput("Enter Card Number: ");
    cout << cardnumber;

    return 0;
}

// Takes in a string, prints it then get input and returns the input
string getInput(const string& prompt) {
    cout << prompt;
    string cardNumber;
    cin >> cardNumber;
    return cardNumber;
}
