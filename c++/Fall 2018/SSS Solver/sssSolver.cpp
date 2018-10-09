/**
  * @brief Assignment 3
  * @author Daidemang Francis
  */

#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    // get lengths of triangle from user
    double length1, length2, length3;
    cout << "Enter length 1: ";
    cin >> length1;
    cout << "Enter length 2: ";
    cin >> length2;
    cout << "Enter length 3: ";
    cin >> length3;

    // compute the three angles
    double angle1, angle2, angle3;
    const double angleInRadians = 180 / 3.1415927; // value of pi = 3.1415927
    angle1 = acos((length1 * length1 - length2 * length2 - length3 * length3) / (-2 * length2 *length3));
    angle2 = acos((length2 * length2 - length1 * length1 - length3 * length3) / (-2 * length1 *length3));
    angle3 = acos((length3 * length3 - length2 * length2 - length1 * length1) / (-2 * length1 *length2));

    // classifies the triangle -- not completed
    // Use the lengths to classify the triangle as acute, right, or obtuse 
 
    double SumOfAngle = (angle1 + angle2 + angle3) * angleInRadians;
    string AngleType;
    

    // output the result
    if(AngleType == "Acute" || AngleType == "Obtuse" || AngleType == "Rigt") {
        cout << fixed << setprecision(4) << "Angle 1: " << angle1 * angleInRadians << "\n"
             << "Angle 2: " << angle2 * angleInRadians << "\n"
             << "Angle 3: " << angle3 * angleInRadians << "\n" << AngleType << endl;
    }
    else {
        cout << AngleType << endl;
    }

    double name = 67.3801 + 22.6199 + 90;

    cout << name << endl;



    return 0;
}
