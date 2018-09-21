/**
  * @brief Assignment 1 Problem 2
  * @author Francis
  */
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double temperature, windChill;
    int windSpeed;

    // get user input
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> temperature;
    cout << "Enter the windchill in MPH: ";
    cin >> windSpeed;

    // compute windchill
    windChill = 35.74 + (0.6125 * temperature) - 35.75 * pow(windSpeed, 0.16) + (0.4275 * temperature) * pow(windSpeed, 0.16);
    cout << "The wind chill index is " << windChill << endl;

    return 0;
}
