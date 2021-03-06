#ifndef HIKEFUNCTIONS_H
#define HIKEFUNCTIONS_H
#include <iostream>
using namespace std;

/**
 * @brief getData read data into array fron console
 * @param heights array to store data
 * @param size of the array
 */
void getData(int heights[], int size);

/**
 * @brief getHighestPointBetween compute first & second half highest point of the hike
 * @param heights array with hiking data
 * @param startMile beginning of hike data
 * @param endMIle  end of hike data
 * @return highest elevation b/w startMile and endMile
 */
int getHighestPointBetween(const int heights[], int startMile, int endMIle);

/**
 * @brief getAverage compute the avarage elevation
 * @param heigths array with hiking data
 * @param size of the array
 * @return the averag eelevation
 */
double getAverage(const int heigths[], int size);

/**
 * @brief getNumPeaks mile markers higher than markers before & after it
 * @param heights array with hiking data
 * @param size of the array
 * @return the number fo peaks in the hike
 */
int getNumPeaks(const int heights[], int size);

/**
 * @brief getNumSteepSegments compute the number of difficult segments of hike (going up or down)
 * @param heights array with hiking data
 * @param size of the array
 * @return the number of segment that ends with a chnage of more than 1000ft
 */
int getNumSteepSegments(const int heights[], int size);

/**
 * @brief getTotalChnage compute the total chnage covered the hike (uphill or downhill)
 * @param heigths array with hiking data
 * @param startMile starting position
 * @param endMile ending position
 * @return the total elevetion chnage over the range from startMile to endMile
 */
int getTotalChange(const int heights[], int startMile, int endMile);
#endif // HIKEFUNCTIONS_H
