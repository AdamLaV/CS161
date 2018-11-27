/**
  * @brief Assignment 9
  * @author Daidemang Francis & Dakota Palmer
  */
#include <iostream>
#include <functional>
#include <algorithm>
#include <string>
#include <cctype>
#include <iomanip>
#include <fstream>
#include "OregonEducation.h"
using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("OregonEducation.txt");

    const int NUM_DISTRICTS = 375;
    //declare an array of 375 districts:
    EducationalInstitution districts[NUM_DISTRICTS];
    for(int i = 0; i < NUM_DISTRICTS; i++) {
        string data;
        getline(inFile, data);
        districts[i] = parseDistrict(data);
    }

    // menu
    int userInput;
    printMainMenu(userInput);
    while(userInput != 0) {

        // find matching record
        if(userInput == 2) {
            string countyName;
            cout << "Enter name of county: ";
            cin >> countyName;
            transform(countyName.begin(), countyName.end(), countyName.begin(), ::toupper);
            cout << "DISTRICT ID" <<"  " << "DISTRICT NUMBER" << "  " << "COST-PER-STUDENT"
                 << "  " << "COUNTY NAME " << "\n";
            for(int i = 0; i < NUM_DISTRICTS; i++) {
                    printDistrict(districts[i], countyName);
                }
        }

        // return to main menu
        printMainMenu(userInput);

        // print a particular record
        if(userInput == 1) {
            int recordAmount;
            cout << "Enter the amout of record to print: ";
            cin >> recordAmount;
            for(int i = 0; i < recordAmount; i++) {
                getRecord(districts[i]);
            }
        }

        // return to main menu
        printMainMenu(userInput);

    }
}
