/**
  * @brief Assignment 5
  * @author Daidemang Francis & Dakota Palmer
  */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    ifstream input("Images.txt");
    string webAddress, MD5hash;
    double size, totalSize = 0;

    cout <<  "Name" << setw(30) << "Type" << setw(10) << "Width" << setw(10)  << "Height"  << setw(10)  << "Size" << endl;
    // read data from file
    while(input >> webAddress >> MD5hash >> size) {

        // extrat data from the web address
        size_t webAddressIndex = webAddress.find_last_of("/");
        webAddress.erase(0, webAddressIndex + 1);
        size_t questionMark = webAddress.find_first_of("?");
        string fileName = webAddress.substr(0, questionMark);
        size_t period = fileName.find(".");
        string fileType = fileName.substr(period + 1);
        webAddress.erase(0, questionMark + 1);
        size_t findX = webAddress.find("x");
        string fileWidth = webAddress.substr(0, findX);
        string fileHeight = webAddress.substr(findX + 1);

        // extract data from size
        const int KB = 1024;
        size /= KB;
        totalSize += size;


        cout << fixed << setprecision(1) << setw(30) << left << fileName << setw(9) << left << fileType << setw(9) << fileWidth
             << setw(12) << fileHeight << setw(9) << size << "\n";
        if(input.eof()) break;

    }
    cout << endl;
    cout << fixed << setprecision(1) << setw(60) << right << setw(60) << "Total Size: " << totalSize << endl;

    input.close();

    return 0;
}
