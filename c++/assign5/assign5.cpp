#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream input("StudentData.txt");

    //Read data
    string firstName, lastName, email, username;
    double score1, score2, score3, score4, score5, score6, score7, score8, sum = 0;
    int index = 0;

    while (input >> firstName >> lastName >> email >> score1 >> score2 >> score3 >> score4 >>
           score5 >> score6 >> score7 >> score8) {
        if(input.eof()) break;
        index = email.find("@");
        username = email.substr(0, index);
        sum = score1 + score2 + score3 + score4 + score5 + score6 + score7 + score8;
        cout << firstName << " " << lastName <<" " << username << " " << fixed << setprecision(1) << sum / 8 << endl;
    }

    input.close();

    cout << "Done!" << endl;

    return 0;
}
