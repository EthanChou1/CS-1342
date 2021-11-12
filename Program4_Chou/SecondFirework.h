//
// Created by ethan on 10/21/2021.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
#ifndef PROGRAM4_CHOU_SECONDFIREWORK_H
#define PROGRAM4_CHOU_SECONDFIREWORK_H

class secondFirework{
public:
    secondFirework();
    void lines();
    char GetVectorAt(int row, int col);
    int GetVectorSizeCol();
    int GetVectorSizeRow();

private:
    vector<vector<char>> secondFullFirework;

};

#endif //PROGRAM4_CHOU_SECONDFIREWORK_H
