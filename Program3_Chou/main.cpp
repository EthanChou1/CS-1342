#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cctype>
#include "Function.h"
using namespace std;

int main() {
    string firstFile;
    string secondFile;
    string outputFile;
    cout << "Input file name: ";
    cin >> firstFile;
    cout << "Input second file name: ";
    cin >> secondFile;
    cout << endl;

    vector<vector<string>> firstVector;
    vector<vector<string>> secondVector;
    vector<vector<string>> finalVector;

    ifstream file(firstFile);
    ifstream fileTwo(secondFile);
    ofstream output("Output.csv", ios::out);

    if(!file.is_open())
    {
        cout << firstFile << " file not open" << endl;
        return -1;
    }
    if(!fileTwo.is_open())
    {
        cout << secondFile << " file not open" << endl;
        return -1;
    }
    if(!output.is_open())
    {
        cout << outputFile << " file not open" << endl;
        return -1;
    }

    readFile(file, firstVector);
    readFile(fileTwo, secondVector);
    combineVector(firstVector, secondVector, output);
    cout << endl << "Your files have been merged and exported into Output.csv!" << endl;
    cout << "Remember to reload CMakeLists for the output file to update in the directory!" << endl;

    file.close();
    fileTwo.close();
    output.close();

    return 0;
}