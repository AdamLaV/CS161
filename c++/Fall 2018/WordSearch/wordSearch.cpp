#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include "wordSearch.h"
using namespace std;
//const int PUZZLE_SIZE = 10;


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
//    // create a copy of gridkeys
//    char gridKeysCopy[PUZZLE_SIZE][PUZZLE_SIZE];
//    for(int i = 0; i < PUZZLE_SIZE; i++) {
//        for(int j = 0; j < PUZZLE_SIZE; j++) {
//            gridKeysCopy[i][j] = gridKeys[i][j];
//        }
//    }

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

//    // output the final puzzle
//    grid = gridKeys;
//    for(int i = 0; i < PUZZLE_SIZE; i++) {
//        for(int j = 0; j < PUZZLE_SIZE; j++) {
//            cout << grid[i][j] << " ";
//        }
//        cout << endl;
//    }
}

// checkHorizontalFit function
bool checkHorizontalFit(const char grid[PUZZLE_SIZE][PUZZLE_SIZE], int row, int col, string word, bool forward) {
    bool WordFits = 1;

    // forward
    if(forward == 0) {
        for(size_t i = 0; i < word.length(); i++) {
            if(grid[row][col + 1] != word.at(i) && grid[row][col + 1] != ' ') {
               WordFits = 0;
            }
        }
    }




    if(WordFits) {
        return true;
    }
    else {
        return false;
    }


}

// addHorizontalWord function
void addHorizontalWord(char grid[PUZZLE_SIZE][PUZZLE_SIZE], int row, int col, string word, bool forward) {
    //size_t wordSize = word.length();
    char currentLetter;
    if(forward) {
        for(size_t i = 0; i < word.length(); i++) {
            currentLetter = word.at(i);
            grid[row][col + 1] = currentLetter;
        }
    }
    else {
        // reverse word
        for(size_t i = 0; i < word.length() / 2; i++) {
            swap(word[i], word[word.length() - i - 1]);
        }

        for(size_t i = 0; i < word.length(); i++) {
            currentLetter = word.at(i);
            grid[row][col + 1] = currentLetter;
        }
    }

}

// addVerticalWord function
void addVerticalWord(char grid[PUZZLE_SIZE][PUZZLE_SIZE], int row, int col, string word) {
    char currentLetter;
    for(size_t i = 0; i < word.length(); i++) {
        currentLetter = word.at(i);
        grid[row + 1][col] = currentLetter;
    }
}

// spaceCount function
int spaceCount(const char grid[PUZZLE_SIZE][PUZZLE_SIZE]) {
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
    char a = grid[0][0];
    cout << a;

}
