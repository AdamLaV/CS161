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

    // Major Students
    if(status == major && grade >= 90) {
        cout << "A" << endl;
        else if (grade >= 70) {
                cout << "C" << endl;
        }
        else {
            cout << "F" << endl;
        }
    }

    // non major students
    else if (status != major && grade >= 85) {
        cout << "A" << endl;
        else if (grade >= 60) {
            cout << "C" << endl;
        }
        else {
            cout << "F" << endl;
        }
    }

    return 0;
}

