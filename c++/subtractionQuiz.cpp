#include <iostream>
#include <ctime>
#include <cstdlib> // for rand and srand functions

using namespace std;

int main()
{
    // 1. Generate two random numbers
    srand(time(0));
    int number1 = rand() % 10;
    int number2 = rand() % 10;

    //2. Swap number1 with number2 if number1 is < number2
    if(number1 < number2) {
        int temp = number1;
        number1 = number2;
        number2 = temp;
    }

    //3. Prompt the student to answer "what is number1 - number2?"
    cout << "What is " << number1 << " - " << number2 << "? ";
    int answer;
    cin >> answer;

    //4. Grade the asnwer and display the result
    if (number1 - number2 == answer) {
        cout << "You are correct!" << endl;;
    }
    else {
            cout << "Your answer is wrong. " << number1 << " - " << number2
                 << " should be " << (number1 -  number2) << endl;
        }
}
