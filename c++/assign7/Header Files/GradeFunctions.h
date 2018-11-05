#ifndef GRADEFUNCTIONS_H
#define GRADEFUNCTIONS_H

/**
 * @brief getArrayData - read in values from the keyboard into the array
 * @param scores - array of student scores
 * @param size - array total size
 */
void getArrayData(int scores[], int size);

/**
 * @brief average - Calculate the mean of an array
 * @param scores - array of student scores
 * @param size - size of the array
 * @return the mean total of the students avearge
 */
double average(const int scores[], int size);

/**
 * @brief standardDeviation - Calculate the standard deviation of an arraygiven its values and its mean
 * @param scores - array of student scores
 * @param size - size of the array
 * @param mean - students average
 * @return the standard deviation
 */
double standardDeviation(const int scores[], int size, double mean);

/**
 * @brief getLetterGrade - Calculate a letter grade based on a score, a mean and standard deviation
 * @param score -  array of student scores
 * @param mean - students average
 * @param stdDev - students total standard deviation
 * @return a letter grade for each student
 */
char getLetterGrade(const int score, double mean, double stdDev);


#endif // GRADEFUNCTIONS_H
