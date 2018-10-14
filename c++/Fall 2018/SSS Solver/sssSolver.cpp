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
 // problem not completed
    string angleName;
    if(pow(lengthOne, 2) + pow(lengthTwo, 2) > pow(lengthThree, 2)) {
        angleName = "Acute";
    }
    else if (pow(lengthTwo, 2) < pow(lengthOne, 2) + pow(lengthTwo, 2)) {
         angleName = "Obtuse";
    }
    else if (pow(lengthOne, 2) + pow(lengthTwo, 2) == pow(lengthThree, 2)) {
        angleName = "Right";
    }
    else {
        angleName = "Impossible Triangle";
    }

    // output result
    if(angleName == "Acute" || angleName == "Obtuse" || angleName == "Right") {
        cout << "Angle 1: " << angleOne * angleInRadian << "\n" << "Angle 2: " << angleTwo * angleInRadian << "\n"
             << "Angle 3: " << angleThree * angleInRadian << endl;
    }
    else {
        cout << angleName;
    }
  
    return 0;
}
