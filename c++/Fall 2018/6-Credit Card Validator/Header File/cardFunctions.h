#ifndef CRADFUNCTIONS_H
#define CRADFUNCTIONS_H
#include <iostream>
using namespace std;

/**
 * @brief getCardType returns a string representing the type of credit card a number is
 * @param cardNumber reference varable -- return card type
 * @return Visa, MasterCard, American Express, or Unknown
 */
string getCardType(const string& cardNumber);

/**
 * @brief isValid return true of false indicating a credit card number is valid
 * @param cardNumber string of credit card number
 * @return true or false
 */
bool isValid(const string& cardNumber);

/**
 * @brief luhnDigitSum sum the digits of a credit card number
 * @param cradNumber to sum
 * @return total sum of cradNumber
 */
int luhnDigitSum(const string& cardNumber);

/**
 * @brief charToInt turns a char like '3' into the number it represent (3)
 * @param digit char to chnage
 * @return the number value
 */
int charToInt(char digit);

/**
 * @brief doubleDigitValue doubles a number -- if doubled value is two digit long adds them
 * @param number to be doubled
 * @return doubled value
 */
int doubleDigitValue(int number);
#endif // CRADFUNCTIONS_H
