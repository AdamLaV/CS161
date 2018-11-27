#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <iomanip>
#include "OregonEducation.h"
using namespace std;

// printMainMenu function
void printMainMenu(int &userInput) {
    cout << endl;
     userInput = 0;
    cout << "Welcome to Oregon Education Record Program. \n"
         << "Enter 1 to print a particular county record: \n"
         << "Enter 2 to find matching records: \n"
         << "Enter 3 to find max/min: \n"
         << "Enter 4 to print aggregate data: " << endl;
    cin >> userInput;
}


// EducationalInstitution function
EducationalInstitution parseDistrict(string dataString) {
    EducationalInstitution  newDistrict;

    // get district ID
    unsigned int commaLoc = dataString.find(",");
    string stringID = dataString.substr(0, commaLoc);
    newDistrict.districtID = stoi(stringID);

    // get district number
    dataString.erase(0, commaLoc+1);
    unsigned int commaLoc2 = dataString.find(",");
    string name = dataString.substr(0, commaLoc2);
    unsigned int lastSpaceLoc = name.find_last_of(" ");
    name.erase(0, lastSpaceLoc);
    newDistrict.districtNumber = name;

    // get operating cost per sutdent
    dataString.erase(0, commaLoc2+2);
    unsigned int commaLoc3 = dataString.find(",");
    string stringCost = dataString.substr(0, commaLoc3+1);
    newDistrict.operatingCostPerStudent = stod(stringCost);

    // get county name
    dataString.erase(0, commaLoc3+1);
    newDistrict.countyName = dataString;


    return newDistrict;
}

// printDistrict function
void printDistrict(const EducationalInstitution& d, string& countyName) {
    if(countyName == d.countyName) {
        cout << d.districtID << setw(13) << d.districtNumber
             << setw(14) << "$" << d.operatingCostPerStudent
             << setw(13) <<" " << d.countyName << endl;
    }
}

// getRecord function
void getRecord(const EducationalInstitution& r) {
    cout << r.districtID << setw(13) << r.districtNumber
         << setw(14) << "$" << r.operatingCostPerStudent
         << setw(13) <<" " << r.countyName << endl;
}
