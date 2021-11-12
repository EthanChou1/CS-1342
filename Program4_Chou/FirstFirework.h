//
// Created by ethan on 10/21/2021.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
#ifndef PROGRAM4_CHOU_FIRSTFIREWORK_H
#define PROGRAM4_CHOU_FIRSTFIREWORK_H

class firstFirework{
    public:
        firstFirework();
        void lines();
        char GetVectorAt(int row, int col);
        int GetVectorSizeCol();
        int GetVectorSizeRow();

    private:
        vector<vector<char>> fullFirework;
        vector<vector<char>> secondFullFirework;
        vector<vector<char>> thirdFullFirework;

};

#endif //PROGRAM4_CHOU_FIRSTFIREWORK_H
