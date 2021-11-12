//
// Created by ethan on 10/2/2021.
//
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cctype>
#include "Function.h"
#include <string>
#include <sstream>

using namespace std;

/**
 * Reads a file and outputs each line
 * into a vector. It then outputs each
 * vector into a 2D vector.
 * @param inputFile
 * @param vectorInput
 */
void readFile(ifstream& inputFile, vector<vector<string>>& vectorInput)
{
    string line;
    while(getline(inputFile, line))
    {
        stringstream lineStream(line);
        string arrayLine;
        vector<string> firstVector;
        while(getline(lineStream, arrayLine, ','))
        {
            firstVector.push_back(arrayLine);
        }
        vectorInput.push_back(firstVector);
    }
}

/**
 * Takes the two 2D vectors, and
 * combines the two. It then outputs
 * it into a output file.
 * @param firstVector
 * @param secondVector
 * @param outputFile
 */
void combineVector(vector<vector<string>> firstVector, vector<vector<string>> secondVector, ofstream& outputFile)
{
    string line;
    string secondLine;
    int counter = 0;
    for(int i = 0; i < firstVector.size(); i++)
    {
        for(int j = 0; j < firstVector[i].size(); j++)
        {
            while(!(secondVector[i][0] == firstVector[counter][0]))
            {
                counter++;
            }
            line = firstVector[counter][j] + ",";
            cout << line;
            outputFile << line;
        }
        for(int j = 1; j <= firstVector[i].size(); j++)
        {
            if(j <= firstVector[i].size() - 1)
            {
                secondLine = secondVector[i][j] + ",";
                cout << secondLine;
                outputFile << secondLine;
            }
            else
            {
                secondLine = secondVector[i][j];
                cout << secondLine;
                outputFile << secondLine;
            }
        }
        cout << endl;
        outputFile << endl;
    }
}
