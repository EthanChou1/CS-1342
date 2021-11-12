//
// Created by ethan on 10/21/2021.
//

#include "SecondFirework.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

secondFirework::secondFirework() = default;

/**
 * Creates an 2D vector of char
 * to display the firework.
 */
void secondFirework::lines(){
    string lineOne = "  ^,^,^  ";
    string lineTwo = "^,^,^,^,^";
    string lineThree = "^,^,^,^,^";
    string lineFour = "  ^,^,^  ";
    vector<char> lineOneVector(lineOne.begin(), lineOne.end());
    vector<char> lineTwoVector(lineTwo.begin(), lineTwo.end());
    vector<char> lineThreeVector(lineThree.begin(), lineThree.end());
    vector<char> lineFourVector(lineFour.begin(), lineFour.end());
    vector<vector<char>> fullLine;
    fullLine.push_back(lineOneVector);
    fullLine.push_back(lineTwoVector);
    fullLine.push_back(lineThreeVector);
    fullLine.push_back(lineFourVector);

    secondFullFirework = fullLine;
}

/**
 * Returns the row and column of
 * the 2D vector
 */
char secondFirework::GetVectorAt(int row, int col){
    return secondFullFirework[row][col];
}

/**
 * Returns the column of
 * the 2D vector
 */
int secondFirework::GetVectorSizeCol(){
    return secondFullFirework[0].size();
}

/**
 * Returns the row of
 * the 2D vector
 */
int secondFirework::GetVectorSizeRow(){
    return secondFullFirework.size();
}

