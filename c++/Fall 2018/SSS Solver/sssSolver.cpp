/**
  * @brief Assignment 3
  * @author Daidemang Francis & Dakota Palmer
  */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // get input from user;
    double lengthOne, lengthTwo, lengthThree;
    cout << "Enter length 1: ";
    cin >> lengthOne;
    cout << "Enter length 2: ";
    cin >> lengthTwo;
    cout << "Enter length 3: ";
    cin >> lengthThree;

   // Computer angles
    const double angleInRadian = 180 / 3.1415927; // value of PI = 3.1415927
    double angleOne = acos((lengthOne * lengthOne - lengthTwo * lengthTwo - lengthThree * lengthThree) / (-2 * lengthTwo * lengthThree));
    double angleTwo = acos((lengthTwo * lengthTwo - lengthOne * lengthOne - lengthThree * lengthThree) / (-2 * lengthOne * lengthThree));
    double angleThree = acos((lengthThree * lengthThree - lengthTwo * lengthTwo - lengthOne * lengthOne) / (-2 * lengthOne * lengthTwo));


    // Determine whether a triangle can be formed given three side lengths
    if(lengthOne + lengthTwo > lengthThree && lengthOne + lengthThree > lengthTwo && lengthTwo + lengthThree > lengthOne) {

        // if triangle can be formed -- classifies triangle
            string triangleName;
          if(pow(lengthThree, 2) < pow(lengthOne, 2) + pow(lengthTwo, 2)) {
                triangleName = "Acute";
           }
           else if (pow(lengthThree, 2) == pow(lengthOne, 2) + pow(lengthTwo, 2)) {
                triangleName = "Right";
           }
          else if (pow(lengthThree, 2) > pow(lengthOne, 2) + pow(lengthTwo, 2)) {
              triangleName = "Obtuse";
        }

          cout << "Angle 1: " << angleOne * angleInRadian << "\n" << "Angle 2: " << angleTwo * angleInRadian << "\n"
               << "Angle 3: " << angleThree * angleInRadian << "\n" << triangleName << endl;
    }
    else {
        cout << "Impossible Triangle" << endl;
    }

    return 0;
}
