/**
 * Print all multiples of number < 10000
 * */

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter your number: ";
    cin >> number;

    while (number < 10000) {
        cout << number << endl;
        number *= number;
    }

    return 0;
}
