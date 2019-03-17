/**
  * @brief Assignment 8
  * @author Daidemang Francis & Dakota Palmer
  */
#include <iostream>
#include <string>
#include "wordSearch.h"
using namespace std;

char gridKeys[PUZZLE_SIZE][PUZZLE_SIZE] = {
   {'H','_','_','_','_','_','_','_','_','_'},
   {'E','_','_','_','_','_','_','_','_','_'},
   {'A','_','D','_','_','_','I','N','T','_'},
   {'P','R','O','G','R','A','M','_','_','_'},
   {'_','_','U','_','_','_','_','_','_','_'},
   {'_','_','B','_','_','_','M','_','_','_'},
   {'_','_','L','_','_','_','A','_','_','_'},
   {'_','_','E','_','V','O','I','D','_','_'},
   {'_','_','_','_','_','_','N','_','_','_'},
   {'S','T','A','C','K','_','_','_','_','_'}
   };

// printKey function
void printKey(const char grid[PUZZLE_SIZE][PUZZLE_SIZE]) {
     grid = gridKeys;

    for(int i = 0; i < PUZZLE_SIZE; i++) {
        for(int j = 0; j < PUZZLE_SIZE; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

// printPuzzle function
void printPuzzle(const char grid[PUZZLE_SIZE][PUZZLE_SIZE]) {
    grid = gridKeys;

    // add random letter to blank psaces in grid
    srand(time(0));
    char randomChars = 'A';
    for (int i = 0; i < PUZZLE_SIZE; i++) {
        for (int j = 0; j < PUZZLE_SIZE; j++){
            randomChars = (static_cast<char> (rand() % 26 + 65));
            if (grid[i][j] == '_') {
                cout << randomChars << " ";
            }
            else {
               cout << grid[i][j] << " ";
            }
        }
        cout << endl;
    }
}

// checkHorizontalFit function
bool checkHorizontalFit(const char grid[PUZZLE_SIZE][PUZZLE_SIZE], int row, int col, string word, bool forward) {
    grid = gridKeys;
    bool checker = false;
    int wordLength = word.length();
    if(col + wordLength > PUZZLE_SIZE) {
        return false;
    }
    else {
        if(forward == true) {
            for(int i = 0; i < wordLength; i++) {
                if(grid[row][col + i] == '-' || word.at(i) == grid[row][col + i]) {
                    checker = true;
                }
                else {
                    checker = false;
                }
            }
          }

        else if(forward == false) {
            for(int i = 0; i < wordLength; i++) {
                if(grid[row][col - i] == '-' || word.at(i) == grid[row][col - i]) {
                    checker = true;
                }
                else {
                    checker = false;
                }
            }
        }
    }

    if(checker == true) {
        return true;
    }
    else {
        return false;
    }

}

// addHorizontalWord function
void addHorizontalWord(char grid[PUZZLE_SIZE][PUZZLE_SIZE], int row, int col, string word, bool forward) {
    grid = gridKeys;
    char currentLetter;
    if(forward == true) {
        for(size_t i = 0; i < word.length(); i++) {
            currentLetter = word.at(i);
            grid[row][col + i] = currentLetter;
        }
    }
    else if(forward == false) {
        for(size_t i = 0; i < word.length(); i++) {
            currentLetter = word.at(i);
            grid[row][col - i] = currentLetter;
        }
    }

}

// addVerticalWord function
void addVerticalWord(char grid[PUZZLE_SIZE][PUZZLE_SIZE], int row, int col, string word) {
    grid = gridKeys;
    char currentLetter;
    for(size_t i = 0; i < word.length(); i++) {
        currentLetter = word.at(i);
        grid[row + i][col] = currentLetter;
    }
}

// spaceCount function
int spaceCount(const char grid[PUZZLE_SIZE][PUZZLE_SIZE]) {
    grid = gridKeys;
    int blankSpaces = 0;
    for(int i = 0; i < PUZZLE_SIZE; i++) {
        for(int j = 0; j < PUZZLE_SIZE; j++) {
            if(grid[i][j] == '_') {
                blankSpaces++;
            }
        }
    }

    return blankSpaces;
}

// printLargestHorizontalGaps function
void printLargestHorizontalGaps(const char grid[PUZZLE_SIZE][PUZZLE_SIZE]) {
    grid = gridKeys;
    cout << "ROW" << "  " << "GAP SIZE" << "  " << "Start Col" << endl;
    // find gap Size
    int startCol;
    for(int i = 0; i < PUZZLE_SIZE; i++) {
        int gapSize = 0, temp = 0;
        for(int j = 0; j < PUZZLE_SIZE; j++) {
            if(grid[i][j] == '_') {
                gapSize++;
            }
            if((grid[i][j] != '_' || grid[i][j] == '-') && (grid[i][j + 1] != '_' || grid[i][j + 1] == '_')) {
                temp += gapSize;
                gapSize = 0;
            }

        }

        if(temp > gapSize) {
            cout << i << "      " << temp << "      " << startCol << endl;

        }
        else {
            cout << i << "      " << gapSize << "      " << startCol << endl;

        }
        startCol = 0;
    }
}
