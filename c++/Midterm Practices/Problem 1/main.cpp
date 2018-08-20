#include <iostream>

using namespace std;

int main()
{
    char status, major = 'm';
    int grade;
    cout << "Enter Status M or N: ";
    cin >> status;
    cout << "Enter Grade: ";
    cin >> grade;

    //A condition 100 - 90 & 100 - 85
    if(status == major && grade >= 90) {
        cout << "A" << endl;
    }
    else if (status != major && grade >= 85) {
        cout << "A" << endl;
    }

    //C condition 89 - 70 & 84 - 60
    else if (status == major && grade >= 70)
        cout << "C" << endl;
    else if (status != major && grade >= 60) {
        cout << "C" << endl;
    }

    //F condition 69 - 0 & 59 - 0
    else if (status == major && grade <= 69)
        cout << "F" << endl;
    else if (status != major && grade <= 59) {
        cout << "F" << endl;
    }
    return 0;
}
