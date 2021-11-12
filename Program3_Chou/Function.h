//
// Created by ethan on 10/2/2021.
//
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cctype>
#ifndef PROGRAM3_CHOU_FUNCTION_H
#define PROGRAM3_CHOU_FUNCTION_H
using namespace std;

void readFile(ifstream& inputFile, vector<vector<string>>& vectorInput);
void combineVector(vector<vector<string>> firstVector, vector<vector<string>> secondVector, ofstream& outputFile);

#endif //PROGRAM3_CHOU_FUNCTION_H
