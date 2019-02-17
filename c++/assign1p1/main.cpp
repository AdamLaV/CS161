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
 // --------------------------------------------------------------
     //Cleaner way -- Get input from user
    int fourDigitNum;
    cout << "Enter a four digit integer: ";
    cin >> fourDigitNum;

    //Display result
    cout << fourDigitNum % 10 << endl;
    for (int i = 0; i < 3; i++ ) {
        fourDigitNum /= 10;
        cout << fourDigitNum % 10 << endl;
    }

    return 0;
}
