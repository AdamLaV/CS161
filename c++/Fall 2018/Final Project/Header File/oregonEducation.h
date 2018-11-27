#ifndef OREGONEDUCATION_H
#define OREGONEDUCATION_H
#include <string>
using namespace std;
/**
 * @brief printMainMenu print the main menu for the program
 * @param userInput input form the keyboard
 */
void printMainMenu(int& userInput);

/**
 * @brief The OregonEducationdent struct defines a structure to hold district ID, district Number
 *  operating cost per student and the county name
 */
struct EducationalInstitution {
    int districtID;
    string districtNumber;
    double operatingCostPerStudent;
    string countyName;
};

/**
 * @brief parseDistrict turns a string like "2110,NYSSA SCH DIST 26,$7595.11,MALHEUR" into
 *  a EducationalInstitution
 * @param dataString string in format "District ID,District Number,Operating Cost Per Student,County Name"
 * @return EducationalInstitution struct
 */
EducationalInstitution parseDistrict(string dataString);

/**
 * @brief printDistrict out put a matching record
 * @param d record to output
 * @param countyName record to look for
 */
void printDistrict(const EducationalInstitution& d, string& countyName);


/**
 * @brief getRecord print a particular record based on user input
 * @param r struct array with data
 */
void getRecord(const EducationalInstitution& r);

#endif // OREGONEDUCATION_H
