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
    int hikeData[HIKE_LENGTH] = {1200, 3000, 3450, 2800, 2900, 1550, 1750, 1110, 1200};

    // get hightest points from hikeData
    int firstHalf = getHighestPointBetween(hikeData, 0, 4);
    cout << firstHalf << endl;

    return 0;
}
