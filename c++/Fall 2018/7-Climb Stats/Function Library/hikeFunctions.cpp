#include <iostream>
#include "hikeFunctions.h"
using namespace std;

// getData function
void getData(int heights[], int size) {
    cout << "Enter elevations: ";
    for(int i = 0; i < size; i++) {
        cin >> heights[i];
    }
}

// getHighestPointBetween function
int getHighestPointBetween(const int heights[], int startMile, int endMile) {
    int highestPoint = heights[0], swapValue = heights[1];
    for(int i = startMile; i <= endMile; i++) {
        if(heights[i] >= highestPoint){
        swapValue = highestPoint;
        highestPoint = heights[i];
    }
    else if(heights[i] > swapValue){
        swapValue = heights[i];
    }
    }
    return highestPoint;
}

// getAverage function
double getAverage(const int heigths[], int size) {
    double average = 0;
    for(int i = 0; i < size; i++) {
        average += heigths[i];
    }
    average /= 9;

    return average;

}

// getNumPeaks function
int getNumPeaks(const int heights[], int size) {
    int peaks = 0;
    for(int i = 0; i < size; i++) {
        if(heights[i-1] <= heights[i] && heights[i] >= heights[i+1]) {
            peaks++;
        }
    }
    return peaks;
}

// getNumSteepSegments function
int getNumSteepSegments(const int heights[], int size) {
    int segments = 0;
    for(int i = 0; i < size; i++) {
       // bool segmentsChange = false;
        int currentValue = heights[i], nextValue = heights[i+1];
        if(currentValue > nextValue) {
            currentValue -= nextValue;
            if(currentValue >= 1000 && currentValue - 1000 >= nextValue) {
                segments++;
            }
        }
        else {
            nextValue -= currentValue;
            if(nextValue >= 1000) {
                segments++;
            }
        }
    }
    return segments;
}

// getTotalChnage function
int getTotalChange(const int heights[], int startMile, int endMile) {
    int totalChange = 0;
    for(int i = startMile; i < endMile; i++) {
        int currentValue = heights[i], nextValue = heights[i+1];
        if(currentValue > nextValue) {
            totalChange += currentValue -= nextValue;
        }
        else {
            totalChange += nextValue -= currentValue;
        }
    }
    return totalChange;
}
