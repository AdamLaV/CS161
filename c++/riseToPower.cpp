#include <iostream>
using namespace std;

int raiseToPower (int base, int exponent) {
    int result = 1;
    for(int i = 0; i < exponent; i += 1) {
        result *= base;
    }
    return result;
}

int main()
{
    int bs, exp;
    cout << "Enter base: ";
    cin >> bs;
    cout << "Enter exponent: ";
    cin >> exp;
    int threeExpFour = raiseToPower(bs, exp);

    cout << bs << "^" << exp << " is " << threeExpFour << endl;
    return 0;
}
