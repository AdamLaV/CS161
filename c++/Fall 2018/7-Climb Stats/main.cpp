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
    //const int LAST_INDEX  = hikeData.back();

    // get hightest points from hikeData
    int firstHalf = getHighestPointBetween(hikeData, 0, 5);
    int secondHalf = getHighestPointBetween(hikeData, 5, 8);
    cout << firstHalf << " " << secondHalf << endl;

    return 0;
}

