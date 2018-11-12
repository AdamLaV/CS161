/**
  * @brief Assignment 7
  * @author Daidemang Francis & Dakota Palmer
*/
#include <iostream>
#include <cmath>
#include <array>
#include "hikeFunctions.h"
using namespace std;

int main()
{
    const int HIKE_LENGTH = 9;
    int hikeData[HIKE_LENGTH] = {1200, 3000, 3450, 2800, 2900, 1550, 1750, 1110, 1200};

    // get hightest points from hikeData
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
    int totalChange = getTotalChnage(hikeData, 0, 8);

    // output data
    cout <<"Highest Points: \n" <<"  First half: "
         << firstHalf << "\n" <<"  Second half: "<< secondHalf <<"\n"
         <<"  Overall: " << overAllValue <<"\n "<<"Average elevation: " << average << "\n"
         <<"Peaks: "<< peaks << "\n" <<"Difficult segments: " << segments <<"\n" <<
           "Elevation Chnage: " << totalChange << endl;

    return 0;
}
