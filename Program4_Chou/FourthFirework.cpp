//
// Created by ethan on 10/21/2021.
//

#include "FourthFirework.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

fourthFirework::fourthFirework() = default;

/**
 * Creates an 2D vector of char
 * to display the firework.
 */
void fourthFirework::lines(){
    string lineOne = "  ~@~*~@~   ";
    string lineTwo = "~*~@~*~@~*~ ";
    string lineThree = "~*~@$#$@~*~ ";
    string lineFour = "~*~@~*~@~*~ ";
    string lineFive = "  ~@~*~@~   ";
    vector<char> lineOneVector(lineOne.begin(), lineOne.end());
    vector<char> lineTwoVector(lineTwo.begin(), lineTwo.end());
    vector<char> lineThreeVector(lineThree.begin(), lineThree.end());
    vector<char> lineFourVector(lineFour.begin(), lineFour.end());
    vector<char> lineFiveVector(lineFive.begin(), lineFive.end());
    vector<vector<char>> fullLine;
    fullLine.push_back(lineOneVector);
    fullLine.push_back(lineTwoVector);
    fullLine.push_back(lineThreeVector);
    fullLine.push_back(lineFourVector);
    fullLine.push_back(lineFiveVector);

    fourthFullFirework = fullLine;
}

/**
 * Returns the row and column of
 * the 2D vector
 */
char fourthFirework::GetVectorAt(int row, int col){
    return fourthFullFirework[row][col];
}

/**
 * Returns the column of
 * the 2D vector
 */
int fourthFirework::GetVectorSizeCol(){
    return fourthFullFirework[0].size();
}

/**
 * Returns the row of
 * the 2D vector
 */
int fourthFirework::GetVectorSizeRow(){
    return fourthFullFirework.size();
}

