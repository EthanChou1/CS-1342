//
// Created by ethan on 10/21/2021.
//

#include "ThirdFirework.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

thirdFirework::thirdFirework() = default;

/**
 * Creates an 2D vector of char
 * to display the firework.
 */
void thirdFirework::lines(){
    string lineOne = "`o`o`   ";
    string lineTwo = "o`o`o`o ";
    string lineThree = " `o`o`  ";
    vector<char> lineOneVector(lineOne.begin(), lineOne.end());
    vector<char> lineTwoVector(lineTwo.begin(), lineTwo.end());
    vector<char> lineThreeVector(lineThree.begin(), lineThree.end());
    vector<vector<char>> fullLine;
    fullLine.push_back(lineOneVector);
    fullLine.push_back(lineTwoVector);
    fullLine.push_back(lineThreeVector);

    thirdFullFirework = fullLine;

}

/**
 * Returns the row and column of
 * the 2D vector
 */
char thirdFirework::GetVectorAt(int row, int col){
    return thirdFullFirework[row][col];
}

/**
 * Returns the column of
 * the 2D vector
 */
int thirdFirework::GetVectorSizeCol(){
    return thirdFullFirework[0].size();
}

/**
 * Returns the row of
 * the 2D vector
 */
int thirdFirework::GetVectorSizeRow(){
    return thirdFullFirework.size();
}

