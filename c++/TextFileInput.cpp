#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input("scores.txt");

    //Read data
    string firstName, lastName;
    char mi;
    int score;

    while (!input.eof()) {
        input >> firstName >> mi >> lastName >> score;
        if(input.eof()) break;
        cout << firstName << " " << mi << " " << lastName << " " << score << endl;
    }

    input.close();

    cout << "Done!" << endl;

    return 0;
}
