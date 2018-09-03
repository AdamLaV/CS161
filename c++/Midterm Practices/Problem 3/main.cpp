#include <iostream>
using namespace std;

int main()
{
    // ask the user for 100 numbers and total them up

    int sum = 0, getNum, counter = 100;
    while (counter > 0) {
        cout << "Enter a number: ";
        cin >> getNum;
        sum += getNum;
        counter--;
    }

    cout << "The sum is: " << sum << endl;
}
