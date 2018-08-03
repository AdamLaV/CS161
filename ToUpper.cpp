#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a lowercase letter: ";
    char lowercaseletter;
    cin >> lowercaseletter;

    char uppercaseletter = static_cast<char>('A' + (lowercaseletter - 'a'));

    cout << "The corresponding uppercase letter is  " << uppercaseletter << endl;

    return 0;
}
