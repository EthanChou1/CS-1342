//
// Created by ethan on 10/21/2021.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
#ifndef PROGRAM4_CHOU_FOURTHFIREWORK_H
#define PROGRAM4_CHOU_FOURTHFIREWORK_H

class fourthFirework{
public:
    fourthFirework();
    void lines();
    char GetVectorAt(int row, int col);
    int GetVectorSizeCol();
    int GetVectorSizeRow();

private:
    vector<vector<char>> fourthFullFirework;

};

#endif //PROGRAM4_CHOU_FOURTHFIREWORK_H
