#include <iostream>
#include "GradeFunctions.h"
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    // gather students data
    const int NUM_OF_STUDENTS = 10;
    int scores[NUM_OF_STUDENTS];
    getArrayData(scores, NUM_OF_STUDENTS);
    // end data

    // compute students curver maker
    double getAverage = average(scores, NUM_OF_STUDENTS);
    double getStdDev = standardDeviation(scores, NUM_OF_STUDENTS, getAverage);
    cout << fixed << setprecision(1) << "The average is: " << getAverage << "\n"
         << "The standard deviation is: " << getStdDev << "\n" << "Students: ";
    // end students curve narker

    // print number of students
    int counter = 0;
    while(counter < NUM_OF_STUDENTS) {
        counter++;
        cout << counter << "  ";
    } 
    // end printing

    // assign a letter grade to each student
     cout << "\n" << "Grade:    ";
    int score = 0.0;
    for (int i = 0; i < NUM_OF_STUDENTS; ++i)
    {
        score = scores[i];
        char letterGrade = getLetterGrade(score, getAverage, getStdDev);
        cout << letterGrade << "  ";
    }
    // complete grading

    return 0;
}
