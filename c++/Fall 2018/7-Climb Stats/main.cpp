/**
  * @brief Assignment 7
  * @author Daidemang Francis & Dakota Palmer
*/
#include <iostream>
#include <cmath>
#include "hikeFunctions.h"
using namespace std;

int main()
{
    const int HIKE_LENGTH = 9;
    // get data from console
    int hikeData[HIKE_LENGTH];
    getData(hikeData, HIKE_LENGTH);

    // compute data
    int firstHalf = getHighestPointBetween(hikeData, 0, 5);
    int secondHalf = getHighestPointBetween(hikeData, 5, 8);
    int overAllValue;
    if(firstHalf > secondHalf) {
        overAllValue = firstHalf;
    }
    else {
        overAllValue = secondHalf;
    }

    double average = getAverage(hikeData, HIKE_LENGTH);
    int peaks = getNumPeaks(hikeData, HIKE_LENGTH);
    int segments = getNumSteepSegments(hikeData, HIKE_LENGTH);
    int totalChange = getTotalChange(hikeData, 0, 8);

    // output data
    cout <<"Highest Points: \n" <<"  First half: "
         << firstHalf << "\n" <<"  Second half: "<< secondHalf <<"\n"
         <<"  Overall: " << overAllValue <<"\n "<<" Average elevation: " << average << "\n"
         <<"Peaks: "<< peaks << "\n" <<"Difficult segments: " << segments <<"\n" <<
           "Elevation Change: " << totalChange << endl;

    return 0;
}
