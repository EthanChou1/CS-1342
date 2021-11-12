//
// Created by ethan on 10/21/2021.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
#ifndef PROGRAM4_CHOU_THIRDFIREWORK_H
#define PROGRAM4_CHOU_THIRDFIREWORK_H

class thirdFirework{
public:
    thirdFirework();
    void lines();
    char GetVectorAt(int row, int col);
    int GetVectorSizeCol();
    int GetVectorSizeRow();

private:
    vector<vector<char>> thirdFullFirework;

};
#endif //PROGRAM4_CHOU_THIRDFIREWORK_H
