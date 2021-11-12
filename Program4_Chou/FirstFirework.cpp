//
// Created by ethan on 10/21/2021.
//

#include "FirstFirework.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

firstFirework::firstFirework()= default;

/**
 * Creates an 2D vector of char
 * to display the firework.
 */
void firstFirework::lines(){
    string lineOne = ".* *.";
    string lineTwo = " *..*";
    string lineThree = "   * ";
    vector<char> lineOneVector(lineOne.begin(), lineOne.end());
    vector<char> lineTwoVector(lineTwo.begin(), lineTwo.end());
    vector<char> lineThreeVector(lineThree.begin(), lineThree.end());
    vector<vector<char>> fullLine;
    fullLine.push_back(lineOneVector);
    fullLine.push_back(lineTwoVector);
    fullLine.push_back(lineThreeVector);

    fullFirework = fullLine;
}

/**
 * Returns the row and column of
 * the 2D vector
 */
char firstFirework::GetVectorAt(int row, int col){
    return fullFirework[row][col];
}

/**
 * Returns the column of
 * the 2D vector
 */
int firstFirework::GetVectorSizeCol(){
    return fullFirework[0].size();
}

/**
 * Returns the row of
 * the 2D vector
 */
int firstFirework::GetVectorSizeRow(){
    return fullFirework.size();
}

